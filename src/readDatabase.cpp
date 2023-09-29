#include <utils.h>

std::unordered_map<std::string, std::vector<Credentials>> accounts;

void read(){
	std::string filename;
	std::string directory;
    
	filename = getenv("APPDATA");
    filename += "\\SimplePassManager\\Accounts.csv";
    
    // Create directory if it doesn't exist
    directory = getenv("APPDATA");
    directory += "\\SimplePassManager";
    CreateDirectory(directory.c_str(), NULL);
    
    // Load data from file
    std::ifstream infile(filename);
    std::string line;
    
    std::string id;
    							
    while (std::getline(infile, line)) {
    	
    	line = decrypt(line);
    	
        size_t pos = line.find("%");
        size_t pos1= line.find(",");

        // Domain
		if(pos != std::string::npos){
        	id = line.substr(pos+1);
		}
		
		// Account Credentials
		else if(pos1 != std::string::npos){
				
				Credentials cred;
                cred.username = line.substr(0,pos1);
                cred.password = line.substr(pos1+1);
	            accounts[id].push_back(cred);
		}
    }
    infile.close();
}

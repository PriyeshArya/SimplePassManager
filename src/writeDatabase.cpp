#include <utils.h>


void write(){
	std::string filename;
	
	filename = getenv("APPDATA");
    filename += "\\SimplePassManager\\Accounts.csv";
	
	std::string tempFilename;
	tempFilename = getenv("APPDATA");
    tempFilename += "\\SimplePassManager\\tempAccounts.csv";
	
    std::ofstream outfile(tempFilename);
    for (auto account : accounts) {
    	std::string domain = "%" + account.first;
		outfile << encrypt(domain) << std::endl;
    	
		for(Credentials cred: account.second){	
			std::string entry = cred.username + "," + cred.password;
			outfile << encrypt(entry) << std::endl;
		}
    }
    outfile.close();
    
    // Remove Old File and Update with New One.
    const char * p = filename.c_str();
    remove(p);
    rename(tempFilename.c_str(), p);
}

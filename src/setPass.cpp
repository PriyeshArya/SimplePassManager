#include <utils.h>

bool setPass(){
	std::string newPass;
	std::string confirmNewPass;
	
	std::cout << std::endl;
	
	std::cout << "Enter a New Login Key: ";
	std::cin >> newPass;
	
	std::cout << "Confirm New Login Key: ";
	std::cin >> confirmNewPass;
	
	if(newPass == confirmNewPass){
		std::string keyFile;
		std::string tempKeyFile;
		
		keyFile = getenv("APPDATA");
		keyFile += "\\SimplePassManager";
		tempKeyFile = keyFile;
		
		keyFile += "\\key.txt";
		tempKeyFile += "\\tempKey.txt";
		
		std::ofstream outfile(tempKeyFile);
		newPass = encrypt(newPass);
		outfile << newPass << std::endl;
		outfile.close();
		
		const char * p = keyFile.c_str();
	    remove(p);
	    rename(tempKeyFile.c_str(), p);
	    
	    return true;
	}
	
	setColor(12);
	std::cout << "ERROR: Entered Keys do not Match." << std::endl;
	resetColor();
	
	std::cout << std::endl;
	std::cout << std::endl;
	return false; 
}

#include <database.h>

// Function to add an Entry
void add(std::string domain, std::string username, std::string password){
	
	Credentials* cred = nullptr;
	if(lookup(domain, username, cred)){	
		std::cout << "This account already exsits." << std::endl;
		std::cout << "Username: " << cred->username <<"\t Password: " << cred->password << std::endl << std::endl;
		
		std::cout << "Update this Entry?" << std::endl;
		if(!getConfirmation()){
			
			setColor(12);
			std::cout << "OPERATION ABORTED" << std::endl << std::endl;
			resetColor();
			
			system("pause");
			system("cls");
			return;			
		}

		cred->username = username;
		cred->password = password;
	}
	else{
		
		Credentials newCred;
		newCred = {username, password};
		accounts[domain].push_back(newCred);
	}
	
	write();
	
	setColor(10);
	std::cout << "SUCCESS" << std::endl << std::endl;
	resetColor();
	
	system("pause");
	system("cls");
}

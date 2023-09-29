#include <database.h>

// Function to update an Entry
void update(std::string domain, std::string username, std::string password){
	
	Credentials* cred = nullptr;
	if(!lookup(domain, username, cred)){
		setColor(12);
		std::cout << "ERROR: No Such Entries Found" << std::endl;
		resetColor();
		std::cout << "Create a New Entry?" << std::endl;
		
		if(!getConfirmation()){
			setColor(12);
			std::cout << "OPERATION ABORTED" << std::endl << std::endl;
			resetColor();
			system("pause");
			system("cls");
			return;			
		}
		
		Credentials newCred;
		newCred = {username, password};
		accounts[domain].push_back(newCred);
	}
	else {
		// Update Account
		cred->username = username;
		cred->password = password;
	}
	
	write();
	std::cout << "SUCCESS" << std::endl << std::endl;
	
	system("pause");
	system("cls");
}

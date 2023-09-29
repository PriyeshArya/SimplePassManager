#include <database.h>

// Function to remove an Entry
void remove(std::string domain, std::string username){
	
	Credentials* cred = nullptr;
	if(!lookup(domain, username, cred)){
		
		setColor(12);
		std::cout << "ERROR: No Such Entries Found" << std::endl;
		resetColor();
		
		return;
	}
	
	std::vector<Credentials> &creds = accounts[domain];
	auto index = cred - &creds[0];
	
	creds.erase(creds.begin() + index);
	
	write();
	setColor(10);
	std::cout << "SUCCESS" << std::endl << std::endl;
	resetColor();
	
	system("pause");
	system("cls");
}

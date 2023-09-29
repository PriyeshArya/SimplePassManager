#include <database.h>

// List All Entries
void listall(){
	if(accounts.size() == 0){
		
		setColor(12);
		std::cout << "No Entries Found" << std::endl;
		resetColor();
		
		return;
	}
	
	for(auto &account: accounts){
		
		std::vector<Credentials> &creds = account.second;
		if(creds.empty()){
			accounts.erase(account.first);
			continue;
		}
		
		std::cout << "DOMAIN: " << toUpper(account.first) << std::endl;
		std::cout << "---------";
		for(int i = 0; i < (account.first).size(); i++) std::cout << "-";
		std::cout << std::endl;
		
		for(Credentials cred: creds){
			std::cout << "Username: " << cred.username << std::endl;
			std::cout << "Password: " << cred.password << std::endl;
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	
	system("pause");
	system("cls");
}

// List All Entries of a particular Domain
void listall(std::string domain){
	if(!accounts.count(domain)){
		setColor(12);
		std::cout << "No Entries Found" << std::endl << std::endl;
		resetColor();
		return;
	}
		
	std::vector<Credentials> &creds = accounts[domain];
	if(creds.empty()){
		accounts.erase(domain);
		setColor(12);
		std::cout << "No Entries Found" << std::endl << std::endl;
		resetColor();
		return;
	}
	
	std::cout << "DOMAIN: " << toUpper(domain) << std::endl << std::endl;
	std::cout << "---------";
	for(int i = 0; i < domain.size(); i++) std::cout << "-";
	std::cout << std::endl;
	
	for(Credentials cred: creds){
		std::cout << "Username: " << cred.username << std::endl;
		std::cout << "Password: " << cred.password << std::endl;
		std::cout << std::endl;
	}
	system("pause");
	system("cls");
}

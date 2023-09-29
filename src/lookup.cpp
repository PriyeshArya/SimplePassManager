#include <database.h>

// Function to update an Entry
void lookup(std::string domain, std::string username){

	if(!accounts.count(domain)){
		
		setColor(12);
		std::cout << "No Entries Found" << std::endl << std::endl;
		resetColor();
		
		return;
	}
	
	for(Credentials &creds: accounts[domain]){
		if(creds.username == username){
			std::cout << "Username: " << creds.username <<"\t Password: " << creds.password << std::endl << std::endl;
			
			changeClipboard(creds.username);
			std::cout << "Username copied to Clipboard\t";
			system("pause");
			
			changeClipboard(creds.password);
			std::cout << "Password copied to Clipboard\t";
			system("pause");
			
			changeClipboard("");
			
			system("cls");
			return;
		}
		else if(toLower(creds.username) == toLower(username)){
			std::cout << "Found this instead:-\t";
			std::cout << "Username: " << creds.username << " Password: " << creds.password << std::endl << std::endl;
			
			changeClipboard(creds.username);
			std::cout << "Username copied to Clipboard\t";
			system("pause");
			
			changeClipboard(creds.password);
			std::cout << "Password copied to Clipboard\t";
			system("pause");
			
			changeClipboard("");
			
			system("cls");
			return;
		}
	}
	
	std::cout << "No Entries Found" << std::endl << std::endl;
	system("pause");
	system("cls");
}

// Helper Function for: add(), update(), remove()
bool lookup(std::string domain, std::string username, Credentials* &cred){
	
	if(!accounts.count(domain)) return false;
	
	for(Credentials &creds: accounts[domain]){
		if(creds.username == username){
			cred = &creds;
			return true;
		}
		else if(toLower(creds.username) == toLower(username)){
			cred = &creds;
			return true;
		}
	}
	return false;
}

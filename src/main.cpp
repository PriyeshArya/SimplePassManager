#include <iostream>
#include <string>

#include <utils.h>

int main() {
	// Prevent Unauthorised Access
	authUser();
	read();
	system("pause");
	system("cls");
	
	std::cout << std::endl;
	std::cout << "         SIMPLE PASSWORD MANAGER         " << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	
	
	std::cout << "To Add a New Entry: /add or /new" << std::endl;
	std::cout << "To Lookup an Entry: /lookup or /find" << std::endl;
	std::cout << "To Update an Entry: /update" << std::endl;
	std::cout << "To List all Entry : /listall" << std::endl;
	std::cout << "To Exit the Application: /exit" << std::endl;
	
	std::cout << std::endl << "Need Help? Try: /help" << std::endl;
	
	std::cout << std::endl;
	
	router();
	return 0;
}

#include <help.h>

void helpRemove(){
	system("cls");
	std::cout << std::endl;
	std::cout << "REMOVING AN EXISTING ENTRY: " << std::endl;
	std::cout << "--------------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << "To remove an Entry, you may use: /remove OR /delete                      " << std::endl;
	std::cout << "You may pass anywhere between 2 to 0 attributes along with \"/remove\". " << std::endl;
	std::cout << "Application will ask you Follow-up Questions as needed.                 " << std::endl;
	std::cout << std::endl;
	
	std::cout << "COMMANDS: /remove" << std::endl;
	std::cout << "          /delete" << std::endl;
	std::cout << std::endl;
	
	std::cout << "PARAMETERS: <domainName> <username>" << std::endl;
	std::cout << std::endl;
	
	std::cout << "VALID SYNTAX: " <<std::endl;
	std::cout << "\t 1. /remove <domainName> <userName>" << std::endl;
	std::cout << "\t 2. /remove <domainName>           " << std::endl;
	std::cout << "\t 3. /remove                        " << std::endl;
	std::cout << std::endl;
	
	std::cout << "For Example:                      " << std::endl;
	std::cout << "\t /remove A1iB4ba myUsername   - Deletes Account" << std::endl;
	std::cout << "\t /delete Hotst4r              - Asks Username -> Deletes Account" << std::endl;
	std::cout << "\t /remove                      - Asks DomainName -> Asks Username -> Deletes Account" << std::endl;
	std::cout << std::endl;

	system("pause");
	system("cls");
}

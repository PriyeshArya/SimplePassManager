#include <help.h>

void helpAdd(){
	system("cls");
	
	std::cout << std::endl;
	std::cout << "ADDING A NEW ENTRY: " << std::endl;
	std::cout << "------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << "To add a new Entry, you may use: /add OR /new                                    " << std::endl;
	std::cout << "You may pass anywhere between 3 to 0 attributes along with \"/add\" OR \"/new\". " << std::endl;
	std::cout << "Application will ask you Follow-up Questions as needed.                          " << std::endl;
	std::cout << std::endl;
	
	std::cout << "COMMANDS: /add" << std::endl;
	std::cout << "          /new" << std::endl;
	std::cout << std::endl;
	
	std::cout << "PARAMETERS: <domainName> <username> <password>" << std::endl;
	std::cout << std::endl;
	
	std::cout << "VALID SYNTAX: " <<std::endl;
	std::cout << "\t 1. /add <domainName> <userName> <passWord>" << std::endl;
	std::cout << "\t 2. /add <domainName> <userName>           " << std::endl;
	std::cout << "\t 3. /add <domainName>                      " << std::endl;
	std::cout << "\t 4. /add                                   " << std::endl;
	std::cout << std::endl;
	
	std::cout << "For Example:                " << std::endl;
	std::cout << "\t /add Netf1ix admin 12345  - Adds Account" << std::endl;
	std::cout << "\t /new Hot$tar admin        - Asks Password -> Adds Account" << std::endl;
	std::cout << "\t /add Pr1me                - Asks Username -> Asks Password -> Adds Account" << std::endl;
	std::cout << "\t /new                      - Asks DomainName -> Asks Username -> Asks Password -> Adds Account" << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

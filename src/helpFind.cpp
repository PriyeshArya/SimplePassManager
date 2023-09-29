#include <help.h>

void helpFind(){
	std::cout << std::endl;
	std::cout << "FINDING AN EXISTING ENTRY: " << std::endl;
	std::cout << "--------------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << "To find an Entry, you may use: /find OR /lookup                      " << std::endl;
	std::cout << "You may pass anywhere between 2 to 0 attributes along with \"/find\" OR \"/lookup\"." << std::endl;
	std::cout << "Application will ask you Follow-up Questions as needed.                 " << std::endl;
	std::cout << std::endl;
	
	std::cout << "COMMANDS: /find" << std::endl;
	std::cout << "          /lookup" << std::endl;
	std::cout << std::endl;
	
	std::cout << "PARAMETERS: <domainName> <username>" << std::endl;
	std::cout << std::endl;
	
	std::cout << "VALID SYNTAX: " <<std::endl;
	std::cout << "\t 1. /find <domainName> <userName>" << std::endl;
	std::cout << "\t 2. /find <domainName>           " << std::endl;
	std::cout << "\t 3. /find                        " << std::endl;
	std::cout << std::endl;
	
	std::cout << "For Example:                    " << std::endl;
	std::cout << "\t /find FaceCopy myUsername    - Displays Password" << std::endl;
	std::cout << "\t /lookup H0tstar              - Asks Username -> Displays Password" << std::endl;
	std::cout << "\t /find                        - Asks DomainName -> Asks Username -> Displays Password" << std::endl;
	std::cout << std::endl;
	
	std::cout << "NOTE: This command is to be used only if you REMEMBER YOUR USERNAME" << std::endl;
	std::cout << "      In case you forgot it, try out \"/listall\" or \"/help /listall\" to know the valid syntax and Use Cases." << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

#include <help.h>

void helpUpdate(){
	system("cls");
	std::cout << std::endl;
	std::cout << "UPDATING AN EXISTING ENTRY: " << std::endl;
	std::cout << "--------------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << "To update an Entry, you may use: /update OR /patch                      " << std::endl;
	std::cout << "You may pass anywhere between 3 to 0 attributes along with \"/update\". " << std::endl;
	std::cout << "Application will ask you Follow-up Questions as needed.                 " << std::endl;
	std::cout << std::endl;
	
	std::cout << "COMMANDS: /update" << std::endl;
	std::cout << "          /patch" << std::endl;
	std::cout << std::endl;
	
	std::cout << "PARAMETERS: <domainName> <username> <password>" << std::endl;
	std::cout << std::endl;
	
	std::cout << "VALID SYNTAX: " <<std::endl;
	std::cout << "\t 1. /update <domainName> <userName> <passWord>" << std::endl;
	std::cout << "\t 2. /update <domainName> <userName>           " << std::endl;
	std::cout << "\t 3. /update <domainName>                      " << std::endl;
	std::cout << "\t 4. /update                                   " << std::endl;
	std::cout << std::endl;
	
	std::cout << "For Example:                    " << std::endl;
	std::cout << "\t /update Metflix admin 123456  - Updates Password" << std::endl;
	std::cout << "\t /patch H0tstar admin          - Asks New Password -> Updates Password" << std::endl;
	std::cout << "\t /update Prine                 - Asks Username -> Asks New Password -> Updates Password" << std::endl;
	std::cout << "\t /patch                        - Asks Domain -> Asks Username -> Asks New Password -> Updates Password" << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

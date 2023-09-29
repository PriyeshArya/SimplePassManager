#include <help.h>

void helpListall(){
	system("cls");
	
	std::cout << std::endl;
	std::cout << "LISTING ALL EXISTING ENTRIES: " << std::endl;
	std::cout << "--------------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << "To listall Entries, you may use: /listall OR /listall <domainName>      " << std::endl;
	std::cout << "You may pass nothing along with \"/listall\" if you want to show all Entries of Every Domains" << std::endl;
	std::cout << "If You pass <domainName> along with \"listall\", then it shows all Entries of only that Specific Domain."<< std::endl;
	std::cout << std::endl;
	
	std::cout << "COMMANDS: /listall" << std::endl;
	std::cout << "          /findall" << std::endl;
	std::cout << std::endl;
	
	std::cout << "PARAMETERS: none OR <domainName> (optional)" << std::endl;
	std::cout << std::endl;
	
	std::cout << "VALID SYNTAX: " <<std::endl;
	std::cout << "\t 1. /listall <domainName>" << std::endl;
	std::cout << "\t 2. /listall             " << std::endl;
	std::cout << std::endl;
	
	std::cout << "For Example:                      " << std::endl;
	std::cout << "\t /listall G00gle   - Displays all Accounts associated with G00gle." << std::endl;
	std::cout << "\t /listall          - Displays all Accounts of Every Domain." << std::endl;
	std::cout << std::endl;

	system("pause");
	system("cls");
}

#include <help.h>

void helpClear(){
	system("cls");
	std::cout << std::endl;
	std::cout << "CLEAR SCREEN:" << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << std::endl;
	std::cout << "To remove all pre-existing Contents in Console" << std::endl;
	std::cout << std::endl;
	
	std::cout << "COMMANDS: /clear" << std::endl;
	std::cout << "          /cls" << std::endl;
	std::cout << std::endl;
	
	std::cout << "PARAMETERS: none" << std::endl;
	std::cout << std::endl;
	
	std::cout << "For Example:                 " << std::endl;
	std::cout << "\t /clear  - Clears Screen" << std::endl;
	std::cout << "\t /cls    - Clears Screen" << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

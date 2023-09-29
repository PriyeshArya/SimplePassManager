#include <help.h>

void helpExit(){
	system("cls");
	std::cout << std::endl;
	std::cout << "EXIT APPLICATION:" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::endl;
	std::cout << "To Exit the Application; Same as ALT + F4." << std::endl;
	std::cout << std::endl;
	
	std::cout << "COMMANDS: /exit" << std::endl;
	std::cout << "          /close" << std::endl;
	std::cout << std::endl;
	
	std::cout << "PARAMETERS: none" << std::endl;
	std::cout << std::endl;
	
	std::cout << "For Example:                    " << std::endl;
	std::cout << "\t /exit     - Exits Application" << std::endl;
	std::cout << "\t /close    - Exits Application" << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

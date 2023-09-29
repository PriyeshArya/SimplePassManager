#include <help.h>

void helpCommands(){
	system("cls");
	
	std::cout << std::endl;
	std::cout << "Following is the List of Valid Commands: " << std::endl;
	std::cout << "---------------------------------------- " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "   ADD     :   /add         OR    /new       " << std::endl;
	std::cout << "   FIND    :   /find        OR    /lookup    " << std::endl;
	std::cout << "   UPDATE  :   /update      OR    /patch     " << std::endl;
	std::cout << "   REMOVE  :   /remove      OR    /delete    " << std::endl;
	std::cout << "   LISTALL :   /listall     OR    /findall   " << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "   CHANGE LOGIN KEY  :   /changekey     OR     /setkey     " << std::endl;
	std::cout << "   CLEAR SCREEN      :   /cls           OR     /clear    " << std::endl;
	std::cout << "   EXIT              :   /exit          OR     /close       " << std::endl;
	std::cout << "   ABOUT             :   /about         OR     /info    " << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "Using Correct Command but still showing ERROR?" << std::endl;
	std::cout << std::endl;
	std::cout << "Try the HELP SECTION: /help <command>" << std::endl;
	std::cout << std::endl;
	std::cout << " - Example: /help /add        OR   /help add" << std::endl;
	std::cout << "            /help /new        OR   /help new" << std::endl;
	std::cout << "            /help changekey   OR   /help changekey" << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

#include <utils.h>

void changePass(){
	system("cls");
	
	std::cout << "First Verify it's You!" << std::endl << std::endl;
	authUser();
	
	system("cls");
	
	int count = 0;
	while(!setPass()){
		count++;
		if(count == 3){
			setColor(12);
			std::cout << "ERROR: Maximum Attempt Reached" << std::endl << std::endl;
			std::cout << "OPERATION ABORTED" << std::endl;
			resetColor();
			return;
		}
	}
	
	setColor(10);
	std::cout << "OPERATION SUCCESSFULL" << std::endl;
	resetColor();
}

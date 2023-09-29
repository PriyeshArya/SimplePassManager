#include <utils.h>

void authUser(){
	resetColor();
	int count = 0;
	
	while(!checkPass()){ 
		count++;
		setColor(12);
		std::cout << "ERROR: Incorrect Key" << std::endl;
		if(count == 3){
			std::cout << "Maximum Limit Reached" << std::endl;
			resetColor();
			system("pause");
			exit(401); 
		}
		std::cout << std::endl;
		resetColor();
	}
}

#include <utils.h>

bool getConfirmation(){
	std::string user_input;
	int count  = 0;
	
	while(count < 3){
		char agreed;
		std::cout << "Enter Y/N: ";
		
		std::getline(std::cin, user_input);
		std::istringstream iss(user_input);
		iss >> agreed;
		iss.str(std::string());
		
		if(agreed == 'Y' || agreed == 'y' || agreed == 'N' || agreed == 'n'){
			return (agreed == 'Y' || agreed == 'y')? true: false;
		}
		else std::cout << "ERROR: Invalid Input, Please try again." << std::endl;
		count++;
	}
	std::cout << "Maximum Try Limit Reached." << std::endl;
	return false;
}

#include <utils.h>

void getInput(std::string &domain, std::string &username, std::string &password){
	std::string user_input;
	std::getline(std::cin, user_input);
	std::istringstream iss(user_input);

	if (!(iss >> domain)) {
        std::cout << "Domain: ";
        std::cin >> domain;
        domain = toLower(domain);
    }
    if (!(iss >> username)) {
        std::cout << "Username: ";
        std::cin >> username;
    }
    if (!(iss >> password)) {
        std::cout << "Password: ";
        std::cin >> password;
    }
    iss.str(std::string());
}

void getInput(std::string &domain, std::string &username){
	std::string user_input;
	std::getline(std::cin, user_input);
	std::istringstream iss(user_input);
	
	if (!(iss >> domain)) {
        std::cout << "Domain: ";
        std::cin >> domain;
        domain = toLower(domain);
    }
    if (!(iss >> username)) {
        std::cout << "Username: ";
        std::cin >> username;
    }
    iss.str(std::string());
}

void getInput(std::string &domain){
	std::string user_input;
	std::getline(std::cin, user_input);
	std::istringstream iss(user_input);
	
	if(!(iss >> domain)){
		domain = "";
		return;
	}
	iss.str(std::string());
}

void getInput(){
	std::string user_input;
	std::getline(std::cin, user_input);
	std::istringstream iss(user_input);
	iss.str(std::string());
}

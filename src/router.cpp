#include <utils.h>
#include <database.h>
#include <help.h>

void router(){
	std::cout << ">> ";
    std::string query;
    
    int invalidCount = 0;
    
    while(std::cin >> query){
    	query = toLower(query);
    	
    	// Insert Data
    	if(query == "/add" || query == "/new"){
			
			std::string domain;
	        std::string username;
	        std::string password;
	        getInput(domain, username, password);
	        std::cout << std::endl;
	        
			add(domain, username, password);
		}
		
		// Lookup Data
    	else if(query == "/find" || query == "/lookup"){
    		std::string domain;
    		std::string username;
    		getInput(domain, username);
    		std::cout << std::endl;
			
			lookup(domain, username);
		}
		
		// Update Existing Data
    	else if(query == "/update" || query == "/patch"){

    		std::string domain;
    		std::string username;
    		std::string password;
    		std::cout << std::endl;
    		
			getInput(domain, username, password);
			
			update(domain, username, password);
		}
		
		// Remove Existing Data
    	else if(query == "/remove" || query == "/delete") {
    		std::string domain;
    		std::string username;
    		getInput(domain, username);
    		std::cout << std::endl;
    		
    		remove(domain, username);
		}
		
		// List all Entries
		else if(query == "/listall" || query == "/findall"){
			std::string domain;
			getInput(domain);
			std::cout << std::endl;
			
			if(domain != "") listall(domain);
			else listall();
		}
		
		// Open Help Panel
		else if(query == "/help"){
			std::string command;
			getInput(command);
			std::cout << std::endl;
			
			if(command != "") help(command);
			else help();
		}
		
		// Exit Application
		else if(query == "/exit" || query == "/close"){
			getInput();
			exit(1);
		}
		
		// Clear Screen
		else if(query == "/cls" || query == "/clear"){
			getInput();
			system("cls");
		}
		
		// About Developer
		else if(query == "/about") {
			getInput();
			about(); 	
		}
		
		// Change Login Key
		else if(query == "/changekey" || query == "/changepass" || query == "/setpass" || query == "/setkey" || query == "/updatekey" || query == "/updatepass"){
			getInput();
			changePass();
		}
		
		// Default
    	else{
    		std::cout << std::endl << "Enter Valid Commands" << std::endl;
    		invalidCount++;
    		
    		if(invalidCount % 3 == 0){
    			std::cout << "Forgot Commands? Try: /help" << std::endl;
			}
			std::cout << std::endl;
		} 

		std::cout << std::endl;
    	std::cout << std::endl << ">> ";
	}
}

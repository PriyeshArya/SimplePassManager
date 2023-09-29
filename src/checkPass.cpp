#include <utils.h>

bool checkPass(){
	std::string keyDir;
	std::string keyFile;

	keyDir = getenv("APPDATA");
	keyDir += "\\SimplePassManager";
	keyFile = keyDir;
	keyFile += "\\key.txt";
	
	CreateDirectory(keyDir.c_str(), NULL);
	std::ifstream infile(keyFile);
	std::string pass;
	std::getline(infile, pass);
	infile.close();
	
	
	if(pass == ""){	
		std::cout << "First Time\? Let\'s setup your Application Login Key" << std::endl;
		std::cout << "This is to keep your database safe and prevent any unauthorised access." << std::endl;
		std::cout << std::endl;
		int count = 0;
		
		while(!setPass()){
			count++;
			if(count == 3){
				setColor(12);
				std::cout << "ERROR: Maximum Attempt Reached" << std::endl << std::endl;
				std::cout << "OPERATION ABORTED" << std::endl;
				resetColor();
				
				system("pause");
				exit(401);
			}
		}
		return true;
	}
	else{
		std::cout << std::endl;
		std::cout << "Enter Login Key: ";
		
		std::string userkey;
		std::cin >> userkey;
		userkey = encrypt(userkey);
		
		if(userkey == pass) {
			setColor(10);
			std::cout << "LOGIN SUCCESSFULL" << std::endl << std::endl;
			resetColor();
			return true;
		}
	}
	
	return false;
}

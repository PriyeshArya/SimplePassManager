#include <help.h>

void helpDatabase(){
	system("cls");
	// Add
	std::cout << std::endl;
	std::cout << "1. ADDING A NEW ENTRY: " << std::endl;
	std::cout << "---------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << " - To add a new entry, use the command: /add <domainName> <username> <password> " << std::endl;
	std::cout << "                                        /new <domainName> <username> <password> " << std::endl;
	std::cout << std::endl;
	std::cout << " - Example: /add Facebook admin 12345   - Adds a new account in Database." << std::endl;
	std::cout << "            /new Orkut newGuy21 54321   - Adds a new account in Database." << std::endl;
	std::cout << std::endl;
	
	std::cout << "For complete reference, use the command: /help add" << std::endl;
	std::cout << std::endl;
	
	system("pause");
//	system("cls");
	
	// Find
	std::cout << std::endl;
	std::cout << "2. FINDING AN EXISTING ENTRY: " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << " - To find a specific entry, use the command: /find <domainName> <username>   " << std::endl;
	std::cout << "                                              /lookup <domainName> <username> " << std::endl;
	std::cout << std::endl;
	std::cout << " - Example: /find Netflix admin22   - Display Password of the Associated account." << std::endl;
	std::cout << "            /lookup HBO nedstark50  - Display Password of the Associated account." << std::endl;
	std::cout << std::endl;
	
	std::cout << "For complete reference, use the command: /help find" << std::endl;
	std::cout << std::endl;
	
	system("pause");
//	system("cls");
	
	// Update
	std::cout << std::endl;
	std::cout << "3. UPDATING AN EXISTING ENTRY: " << std::endl;
	std::cout << "------------------------------ " << std::endl;
	
	std::cout << std::endl;
	std::cout << " - To update an existing entry, use the command: /update <domainName> <username> <newPassword> " << std::endl;
	std::cout << "                                                 /patch <domainName> <username> <newPassword>  " << std::endl;
	std::cout << std::endl;
	std::cout << " - Example: /update Hotstar admin@gmail.com $Giga:Chad$  - Update Password of the Associated Account." << std::endl;
	std::cout << "            /patch Orkut newGuy21 vErYsTrongPa$sWoRd     - Update Password of the Associated Account." << std::endl;
	std::cout << std::endl;
	
	std::cout << "For complete reference, use the command: /help update" << std::endl;
	std::cout << std::endl;
	
	system("pause");
//	system("cls");
	
	// Remove
	std::cout << std::endl;
	std::cout << "4. REMOVING AN EXISTING ENTRY: " << std::endl;
	std::cout << "------------------------------ " << std::endl;
	
	std::cout << std::endl;
	std::cout << " - To remove an existing entry, use the command: /remove <domainName> <username> " << std::endl;
	std::cout << "                                                 /delete <domainName> <username> " << std::endl;
	std::cout << std::endl;
	std::cout << " - Example: /remove WeChat godspeed    - Delete username & password of associated account.  " << std::endl;
	std::cout << "            /delete line.com user22    - Delete username & password of associated account." << std::endl;
	std::cout << std::endl;
	
	std::cout << "For complete reference, use the command: /help remove" << std::endl;
	std::cout << std::endl;
	
	system("pause");
//	system("cls");
	
	// Listall
	std::cout << std::endl;
	std::cout << "5. LISTING ALL ENTRIES: " << std::endl;
	std::cout << "----------------------- " << std::endl;
	
	std::cout << std::endl;
	std::cout << " - To list all existing entries, use the command: /listall " << std::endl;
	std::cout << " - To list all only for a specific domain, use the command: /listall <domainName>" << std::endl;
	std::cout << std::endl;
	std::cout << " - Example: /listall           - Shows all existing entries in database." << std::endl;
	std::cout << " -          /listall Google    - Shows all entries for domain Google.   " << std::endl;
	std::cout << std::endl;
	
	std::cout << "For complete reference, use the command: /help listall" << std::endl;
	std::cout << std::endl;
	
	system("pause");
	system("cls");
}

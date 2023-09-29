#include <help.h>

void help(std::string &query){
	query = toLower(query);
	if(query[0] == '/') query = query.substr(1);
	
	std::set<std::string> add = {"add", "new", "create", "post", "insert", "append", "include", "attach", "inject"};
	std::set<std::string> find = {"lookup", "find", "get", "retrieve", "fetch", "locate", "search", "detect", "query", "discover"};
	std::set<std::string> update = {"update", "patch", "edit", "modify", "amend", "change", "correct", "revise", "alter", "adjust"};
	std::set<std::string> remove = {"remove", "delete", "erase", "eliminate", "purge", "destroy", "trash", "bin", "garbage"};
	std::set<std::string> listall = {"listall", "enumerate", "displayall", "showall", "list", "display", "reveal", "listitems", "listentries", "listrecords"};
	
	std::set<std::string> commands = {"command", "commands", "keyword", "keywords"};
	std::set<std::string> exit = {"exit", "close", "terminate"};
	std::set<std::string> clear = {"clear", "clr", "cls", "clrscr", "freshscreen, clearscreen", "screen"};
	std::set<std::string> about = {"about", "whois", "info", "developer", "contact"};
	std::set<std::string> setkey = {"setkey", "changekey", "setpass", "changepass", "key", "keys", "updatekey", "updatepass"};
	
	
	if(add.count(query)) helpAdd();	
	else if(find.count(query)) helpFind();
	else if(update.count(query)) helpUpdate();
	else if(remove.count(query)) helpRemove();
	else if(listall.count(query)) helpListall();
	
	else if(commands.count(query)) helpCommands();
	
	else if(exit.count(query)) helpExit();
	else if(clear.count(query)) helpClear();
//	else if(about.count(query)) helpAbout();
	else if(setkey.count(query)) helpSetkey();

	else{
		std::cout << "ERROR: Invalid Command" << std::endl;
		std::cout << "Try: /help" << std::endl;
		std::cout << std::endl;
	}
}

void help(){
	system("cls");
	
	std::cout << std::endl;
	std::cout << "   SIMPLE PASSWORD MANAGER: USER GUIDE   " << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Welcome to the Simple Password Manager user guide!" << std::endl;
	std::cout << "In this guide, you will learn about the primary features of the application:" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Want to Know List of all supported Commands?   Try: /help commands" << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "Before we start, There are two types of Commands: " << std::endl;
	std::cout << std::endl;
	std::cout << " - APPLICATION SPECIFIC: Commands to control Application" << std::endl;
	std::cout << "\t /setkey" <<std::endl;
	std::cout << "\t /clear" <<std::endl;
	std::cout << "\t /exit" <<std::endl;
	std::cout << "\t /about" <<std::endl;

	std::cout << std::endl;
	std::cout << " - DATABASE SPECIFIC: Commands to manage Database" << std::endl;
	std::cout << "\t /add" <<std::endl;
	std::cout << "\t /find" <<std::endl;
	std::cout << "\t /update" <<std::endl;
	std::cout << "\t /delete" <<std::endl;
	std::cout << "\t /listall" <<std::endl;
	std::cout << std::endl;
	
	std::cout << "HAVING A DOUBT REGARDING ANY COMMAND?" << std::endl;
	std::cout << "Try: /help <commandName>" << std::endl;
	std::cout << "E.g.: /help /setkey" << std::endl;
	std::cout << "      /help update" << std::endl;
	
	system("pause");
	system("cls");
	helpApplication();
	helpDatabase();
}

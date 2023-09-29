#include <utils.h>

std::string toLower(std::string str) {
    std::string lowerStr;
    for(char c : str){
    	lowerStr += tolower(c);
	} 
    return lowerStr;
}

std::string toUpper(std::string str){
	std::string upperStr;
	for(char c: str){
		upperStr += toupper(c);
	}
	return upperStr;
}

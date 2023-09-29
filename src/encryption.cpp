#include <utils.h>

std::string encrypt(std::string &decryptedLine) {
    std::stringstream hexStream;
    hexStream << std::hex << std::uppercase;
    for (char ch : decryptedLine) {
        hexStream << int(static_cast<unsigned char>(ch));
    }
    return hexStream.str();
}

std::string decrypt(std::string &encryptedLine){
	std::string result;
    for (size_t i = 0; i < encryptedLine.length(); i += 2) {
        std::string byte = encryptedLine.substr(i, 2);
        char ch = static_cast<char>(std::stoi(byte, nullptr, 16));
        result += ch;
    }
    return result;
}

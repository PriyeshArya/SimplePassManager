#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <unordered_map>
#include <cstdlib> 
#include <fstream>
#include <Windows.h>
#include <vector>
#include <set>
#include <sstream>
#include <iostream>
#include <help.h>

// Declare the struct
struct Credentials {
    std::string username;
    std::string password;
};

// Declare the variables
extern std::unordered_map<std::string, std::vector<Credentials>> accounts;

// Function declarations
void read();
void write();

// Input Handling + Buffer Clear
void getInput(std::string &domain, std::string &username, std::string &password);
void getInput(std::string &domain, std::string &username);
void getInput(std::string &domain);
void getInput();


void changeClipboard(std::string text);
bool getConfirmation();

// User Authentication
bool setPass();
bool checkPass();
void authUser();
void changePass();

std::string toLower(std::string str);
std::string toUpper(std::string str);

// Basic Encryption
std::string encrypt(std::string &decryptedLine);
std::string decrypt(std::string &encryptedLine);

void about();

// Route Commands
void router();

// Color Decorations
void setColor(int colorCode);
void resetColor();

#endif // UTILS_H


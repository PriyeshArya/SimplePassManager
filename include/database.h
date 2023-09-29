#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <unordered_map>
#include <cstdlib> 
#include <fstream>
#include <Windows.h>
#include <iostream>

#include <utils.h>

// Function declarations
void add(std::string domain, std::string username, std::string password);
void update(std::string domain, std::string username, std::string password);

void lookup(std::string domain, std::string username);
bool lookup(std::string domain, std::string username, Credentials* &cred);

void remove(std::string domain, std::string username);

void listall();
void listall(std::string domain);

#endif // DATABASE_H


#ifndef HELP_H
#define HELP_H

#include <string>
#include <cstdlib> 
#include <iostream>
#include <utils.h>


void help();
void help(std::string &query);

void helpCommands();
void helpApplication();
void helpDatabase();

// Application Specific
void helpSetkey();
void helpExit();
void helpClear();
//void helpAbout();

// Database Specific
void helpAdd();
void helpUpdate();
void helpFind();
void helpRemove();
void helpListall();


#endif // HELP_H

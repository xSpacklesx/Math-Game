#ifndef HEADER_H
#define HEADER_H

#include <time.h>

#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

void displayGame(int randNum1, int randNum2, char opperation, int score);
int generateNumber();
char generateOperation();
int readUserInput();
//bool validateUserAnswer(int num1, int num2, string op, int userAnswer);

#endif
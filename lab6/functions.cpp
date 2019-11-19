#include "pch.h"
#include "header.h"


int generateNumber() {
	srand(time(0));
	int randNumber1 = rand() % 11;
	//cout << randNumber1 << endl;
	return randNumber1;
}

char generateOperation() {
	srand(time(0));
	int randOp = (rand() % 3) + 1;

	switch (randOp) 
	{
	case 1: 
		return '+';
	case 2:
		return '-';
	case 3: 
		return '*';
	}
}

void displayGame(int randNum1, int randNum2, char opperation, int score){

	cout << "Score: " << score << endl;
	cout << randNum1 << opperation << randNum2 << '=';
	int userInput = readUserInput();
	return;
}

int readUserInput() {

	int userInput;
	cin >> userInput;

	if (!(typeid(userInput).name() == "int"))
	{
		cout << "enter a valid number";
	}
	else
		return userInput;
}

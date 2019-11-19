#include "pch.h"
#include "header.h"

void game() {
	int scoreInit = 0;
	int randNum1 = generateNumber();
	system("pause");
	int randNum2 = generateNumber();
	char opperation = generateOperation();

	int& score = scoreInit;
	displayGame(randNum1, randNum2, opperation, score);

}


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

void displayGame(int randNum1, int randNum2, char opperation, int& score){
	int userInput = 0;
	cout << "Score: " << score << endl;
	cout << randNum1 << opperation << randNum2 << '=';
	userInput = readUserInput();
	
	if (validateUserAnswer(randNum1, randNum2, opperation, userInput)) 
	{
		score++;
	}
	game();
	return;
}

int readUserInput() {

	int userInput;
	cin >> userInput;

	if (!(typeid(userInput).name() == "int"))
	{
		cout << "enter a valid number" << endl;
	}
	else
		return userInput;
}

bool validateUserAnswer(int randNum1, int randNum2, char opperation, int userInput) {
	if (opperation == '+') 
	{
		if (randNum1 + randNum2 == userInput) 
		{
			return true;
		}
	}
	else if (opperation == '-')
	{
		if (randNum1 - randNum2 == userInput)
		{
			return true;
		}
	} 
	else if (opperation == '*')
	{
		if (randNum1 * randNum2 == userInput)
		{
			return true;
		}
	}
	else {
		return false;
	}


}

#include "pch.h"
#include "header.h"


int generateNumber() {
	srand(time(0));
	int randNumber1 = rand() % 11;
	int randNumber2 = rand() % 11;
	int randOp = (rand() % 3) + 1;

	char operand = generateOperation(randOp);

	//cout << randNumber1 << endl;
	//cout <<  randNumber2 << endl;
	//cout << randOp << endl;
	return randNumber1;
}

char generateOperation(int num) {
	switch (num) 
	{
	case 1: 
		return '+';
	case 2:
		return '-';
	case 3: 
		return '*';
	}
}
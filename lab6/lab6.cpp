//A Math Game by Hunter Spack

#include "pch.h"
#include "header.h"

int main()
{
	int score = 0;
	int randNum1 = generateNumber();
	system("pause");
	int randNum2 = generateNumber();
	char opperation = generateOperation();
	//cout << randNum1  << opperation << randNum2 << '=';

	displayGame(randNum1, randNum2, opperation, score);


}
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int gamer, gamerSum, gamerSum1 = 0, gamerSum2 = 0;
	int computer, computerSum, computerSum1 = 0, computerSum2 = 0;
	char answer;
	cout << "Hey. Let's play dice" << endl;
	cout << "The winner is the one who has more than three throws!" << endl;
	cout << "Let's start?" << endl;
	system("pause");
	do
	{
		system("cls");
		cout << "1 - you start" << endl;
		cout << "2 - computer starts" << endl;
		cin >> answer;
		while (answer != '1' && answer != '2')
		{
			cout << "Error.Enter again" << endl;
			cin >> answer;
		}
		system("cls");
		switch (answer)
		{
		case '1':
			for (int a = 0; a < 3; ++a)
			{
				gamerSum1 += gamer = rand() % 6 + 1;
				cout << "Your " << (a + 1) << " throw: " << gamer << endl;
				gamerSum2 += gamer = rand() % 6 + 1;
				cout << "Your " << (a + 1) << " throw: " << gamer << endl;
				computerSum1 += computer = rand() % 6 + 1;
				cout << (a + 1) << " computer throw: " << computer << endl;
				computerSum2 += computer = rand() % 6 + 1;
				cout << (a + 1) << " computer throw: " << computer << endl;
			}
			break;
		case '2':
			for (int a = 0; a < 3; ++a)
			{
				computerSum1 += computer = rand() % 6 + 1;
				cout << (a + 1) << " computer throw: " << computer << endl;
				computerSum2 += computer = rand() % 6 + 1;
				cout << (a + 1) << " computer throw: " << computer << endl;
				gamerSum1 += gamer = rand() % 6 + 1;
				cout << "Your " << (a + 1) << " throw: " << gamer << endl;
				gamerSum2 += gamer = rand() % 6 + 1;
				cout << "Your " << (a + 1) << " throw: " << gamer << endl;
			}
			break;
		}
		gamerSum = gamerSum1 + gamerSum2;
		computerSum = computerSum1 + computerSum2;
		if (gamerSum == computerSum)
		{
			cout << "Draw!" << endl;
		}
		if (gamerSum > computerSum)
		{
			cout << "You won! Your points total - " << gamerSum << ". The sum of the computer points - " << computerSum << endl;
		}
		if (gamerSum < computerSum)
		{
			cout << "The computer won! The sum of the computer points - " << computerSum << ". Your points total - " << gamerSum << endl;
		}
		cout << "Want to play again ? Yes / No " << endl;
		cin >> answer;
	} 
	while (answer == 'Y' || answer == 'y');
	
	system("pause");
	return 0;
}

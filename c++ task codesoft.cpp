#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int numberGuess = rand() % 100 + 1;
	cout << "Guess the number between 1 and 100!!!!!" << endl;

	while(true)
  {
		int guess;
		cout << "Enter guess: ";
		cin >> guess;

		if (guess < numberGuess)
    {
			cout << "Too low! try again" << endl;
		} else if (guess > numberGuess)
    {
			cout << "Too high! try again" << endl;
		} else
    {
			cout << "Hehe congratulations!!!" << endl;
			break;
		}
	}

	return 0;
}

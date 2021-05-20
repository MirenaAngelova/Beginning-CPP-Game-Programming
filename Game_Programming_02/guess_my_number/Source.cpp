// The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int theNumber = rand() % 100 + 1;
	int tries = 0, guess;

	cout << "\tWelcome to Guess My Number\n\n";

	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > theNumber)
		{
			cout << "\nToo high.";
		}

		if (guess < theNumber)
		{
			cout << "\nToo low.";
		}
	} while (guess != theNumber);

	cout << "\nThat's it! You got it in " << tries << " guesses!\n";
}
// Demonstrates the classic game of Hangman

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
	const int MAX_WRONG = 8;

	vector<string> words;
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(time(0));
	random_shuffle(words.begin(), words.end());

	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '*');
	string used = "";

	cout << "\nWelcome to Hangman. GOOD LUCK!\n\n";

	while (wrong < MAX_WRONG && soFar != THE_WORD) 
	{
		cout << "\nYou have " << MAX_WRONG - wrong
			<< " incorrect guesses left\n";
		cout << "You're used following letters:\n"
			<< used << endl;
		cout << "\nSo far the word is:\n"
			<< soFar << endl;

		char guess;
		cout << "\n\nEnter your guess: ";
		cin >> guess;
		guess = toupper(guess);

		used += guess;

		if (THE_WORD.find(guess) != string::npos)
		{
			cout << "\nThat's right. " << guess << " is in the word.\n";
			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess)
				{
					soFar[i] = guess;
				}
			}
		}
		else
		{
			cout << "\nSorry, " << guess << " isn't in the word.\n";
			++wrong;
		}

		
	}

	if (wrong == MAX_WRONG)
	{
		cout << "\nYou've been hanged!\n";
	}
	else
	{
		cout << "\nYou guessed it!\n";
	}

	cout << "\nThe word was: " << THE_WORD << endl;
}
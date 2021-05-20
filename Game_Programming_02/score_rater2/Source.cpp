// Demonstrates the else clause

#include <iostream>

using namespace std;

int main()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score > 500)
	{
		cout << "\nYou got over 500. Nice score.";
	}
	else
	{
		cout << "\nYou got 500 or less. Nothing to brag about.";
	}
}
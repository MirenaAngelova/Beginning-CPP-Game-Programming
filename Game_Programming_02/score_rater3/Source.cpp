// Demonstrates if else if else statements

#include <iostream>

using namespace std;

int main()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 1000)
	{
		cout << "\nYou scored 1000 or more. Imressive!";
	}
	else if (score >= 500)
	{
		cout << "\nYou scored 500 or more. Nice!";
	}
	else if (score >= 250)
	{
		cout << "\nYou scored 250 or more. Decent!";
	}
	else
	{
		cout << "\nYou scored less than 250. Nothing to brag about.";
	}
}
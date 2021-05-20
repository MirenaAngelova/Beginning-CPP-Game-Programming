// Demonstrates default function argument

#include <iostream>
#include <string>

using namespace std;

int askNumber(int high, int low = 1);

int main()
{
	int number = askNumber(5);
	cout << "\nThanks for entering " << number << "\n\n";

	number = askNumber(10, 5);
	cout << "\nThanks for entering " << number << "\n\n";
}

int askNumber(int high, int low)
{
	int num;
	do
	{
		cout << "\nPlease enter a number {" << low << " - " << high << ") :";
		cin >> num;
	} while (num > high || num < low);

	return num;
}

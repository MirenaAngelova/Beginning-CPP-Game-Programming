// Demonstrates while loops

#include <iostream>

using namespace std;

int main()
{
	char again = 'y';

	while (again == 'y')
	{
		cout << "\n**You played an exciting game**";
		cout << "\nDo you want to play again (y/n): ";
		cin >> again;
	}
	
	cout << "\nOkay, bye.";
}
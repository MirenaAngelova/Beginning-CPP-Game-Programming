// Demonstrates passing references to alter argument vasriables

#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
	int myScore = 500;
	int yourScore = 1000;

	cout << "\nOriginal values:\n";
	cout << "My score: " << myScore << "\n";
	cout << "Your scor: " << yourScore << "\n\n";

	cout << "Calling badSwap().\n";
	badSwap(myScore, yourScore);
	cout << "My score: " << myScore << "\n";
	cout << "Your scor: " << yourScore << "\n\n";

	cout << "Calling goodSwap().\n";
	goodSwap(myScore, yourScore);
	cout << "My score: " << myScore << "\n";
	cout << "Your scor: " << yourScore << "\n\n";
}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

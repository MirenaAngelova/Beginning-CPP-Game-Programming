// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int randomNumber = rand();
	int die = (randomNumber % 6) + 1;

	cout << "Yoy rolled a " << die << endl;
}
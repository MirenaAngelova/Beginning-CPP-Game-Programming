// Demonstrates for loops

#include <iostream>

using namespace std;

int main()
{
	cout << "Counting forward:\n";
	int length = 10;
	for (int i = 0; i < length; ++i)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting backward:\n";
	length = 9;
	for (int i = length; i >= 0; --i)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting by fives:\n";
	length = 50;
	for (int i = 0; i <= length; i+=5)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting with null statements:\n";
	int count = 0;
	for ( ; count < 10; )
	{
		cout << count << " ";
		++count;
	}

	cout << "\n\nCounting with nested for loops:\n";
	int ROWS = 5;
	int COLUMNS = 3;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << i << "," << j << " ";
		}
		cout << endl;
	}
}
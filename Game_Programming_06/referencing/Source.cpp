// Demonstrates using references

#include <iostream>

using namespace std;

int main()
{
	int myScore = 1000;
	int& mikesScore = myScore;

	cout << "\nMy score is: " << myScore << "\n\n";
	cout << "Mike's score is: " << mikesScore << "\n\n";

	cout << "Adding to my score 500.\n";
	myScore += 500;
	cout << "My score is: " << myScore << "\n\n";
	cout << "Mike's score is: " << mikesScore << "\n\n";

	cout << "Adding 500 to MIke's score.\n";
	mikesScore += 500;
	cout << "My score is: " << myScore << "\n\n";
	cout << "Mike's score is: " << mikesScore << "\n\n";
}
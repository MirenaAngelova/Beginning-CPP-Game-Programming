// Demonstrates string objects

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word1 = "Game";
	string word2("Over");
	string word3(3, '|');
	string phrase = word1 + " " + word2 + word3;

	cout << "The phrase is: " << phrase << "\n\n";
	cout << "The phrase has " << phrase.size() << " chracters in it.\n\n";
	cout << "The character at position 0 is: " << phrase[0] << "\n\n";

	cout << "Changing the character at position 0.\n";
	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for (int i = 0; i < phrase.size(); ++i)
	{
		cout << "Character at position " << i << " is " << phrase[i] << ".\n";
	}

	cout << "Yhe sequence 'Over' begins at location: " << phrase.find("Over") << "." << endl;

	if (phrase.find("eggplant") == string::npos)
	{
		cout << "\nThe 'eggplant' is not in the phrase." << endl;
	}

	phrase.erase(4, 5);
	cout << "\nThe phrase is now: " << phrase << endl;
	phrase.erase(4);
	cout << "\nThe phrase is now: " << phrase << endl;
	phrase.erase();
	cout << "\nThe phrase is now:" << phrase << endl;

	if (phrase.empty())
	{
		cout << "\nThe phrase is no more!\n";
	}
}
// Demonstrates function overloading

#include <iostream>
#include <string>

using namespace std;


int triple(int number);
string triple(string text);

int main()
{
	cout << "\nTripling of 5: " << triple(5) << "\n\n";
	cout << "Tripling of 'game': " << triple("game") << "\n\n";
}

int triple(int number)
{
	return number * 3;
}

string triple(string text)
{
	return text + text + text;
}

// Demonstrates logical operators

#include <iostream>

using namespace std;

int main()
{
	cout << "\tGame Designr's Network\n";
	int security = 0;

	string username;
	cout << "\nUsername: ";
	cin >> username;

	string password;
	cout << "\nPassword: ";
	cin >> password;

	if (username == "S.Meier" && password == "civilization" )
	{
		cout << "\nHey, Std.";
		security = 5;
	}

	if (username == "S.Miyamoto" && password == "mariobros")
	{
		cout << "\nWhat's up, Shigeru?";
		security = 5;
	}

	if (username == "W.Wright" && password == "thesims")
	{
		cout << "\nHow goes it, Will?";
		security = 5;
	}

	if (username == "guest" || password == "guest")
	{
		cout << "\nWelcome, guest!";
		security = 1;
	}

	if (!security)
	{
		cout << "Your login failed";
	}
}
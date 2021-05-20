// Demonstrates global variables

#include <iostream>

using namespace std;

int glob = 10;

void access_global();
void hide_global();
void change_global();

int main()
{
	cout << "\nIn main() glob is: " << glob << "\n\n";

	access_global();
	hide_global();
	cout << "\nIn main() glob is: " << glob << "\n\n";

	change_global();
	cout << "\nIn main() glob is: " << glob << "\n\n";
}

void access_global()
{
	cout << "\nIn access() glob is: " << glob << "\n\n";
}

void hide_global()
{
	int glob = 0;
	cout << "\nIn hide() glob is: " << glob << "\n\n";
}

void change_global()
{
	glob = 10;
	cout << "\nIn change() glob is: " << glob << "\n\n";
}

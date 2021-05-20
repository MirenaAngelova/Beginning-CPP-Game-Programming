// Demonstrates function inlining

#include <iostream>

using namespace std;

int radiation(int health);

int main()
{
	int health = 80;
	cout << "\nYour health is: " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is: " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is: " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is: " << health << "\n\n";
}

int radiation(int health)
{
	return health / 2;
}

// Demonstrates constructors

#include <iostream>

using namespace std;

class Critter
{
public:
	int m_Hunger;
	Critter(int hunger = 0);
	void Greet();
};

Critter::Critter(int hunger)
{
	cout << "\nA new critter has been born.\n";
	m_Hunger = hunger;
}

void Critter::Greet()
{
	cout << "\nHi! I'm a critter. My hunger level is: " << m_Hunger << ".\n";
}
int main()
{
	Critter crit(9);
	crit.Greet();
}
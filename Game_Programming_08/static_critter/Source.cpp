// Demonstrates static member variables and functions

#include <iostream>

using namespace std;
class Critter
{
public:
	static int s_Total;
	Critter(int huner = 0);
	static int GetTotal();

private:
	int m_Hunger;
};

int Critter::s_Total = 0;
Critter::Critter(int hunger) :m_Hunger(hunger)
{
	cout << "\nA new critter has been born!\n";
	++s_Total;
}

int Critter::GetTotal()
{
	return s_Total;
}

int main()
{
	cout << "\nThe total number of critters is: " << Critter::s_Total << ".\n";
	Critter crit1, crit2, crit3;
	cout << "\nThe total number of critters is: " << Critter::GetTotal() << ".\n";
}
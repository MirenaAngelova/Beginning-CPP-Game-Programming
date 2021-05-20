// Demonstrates setting member access levels

#include <iostream>

using namespace std;

class Critter
{
public:
	Critter(int hunger = 0);
	int GetHunger() const;
	void SetHunger(int hunger);

private:
	int m_Hunger;
};

Critter::Critter(int hunger):m_Hunger(hunger)
{
	cout << "\nA new critter has been born!\n";
}

int Critter::GetHunger() const
{
	return m_Hunger;
}

void Critter::SetHunger(int hunger)
{
	
	if (hunger < 0)
	{
		cout << "\nYou can't set a critter's hunger to a negative numer.\n";
	}
	else
	{
		m_Hunger = hunger;
	}
}

int main()
{
	Critter crit(6);
	cout << "\nCalling GetHunger(): " << crit.GetHunger() << ".\n";

	cout << "\nCalling SetHunger() with -1.\n";
	crit.SetHunger(-1);

	cout << "\nCalling SetHunger() with 9.\n";
	crit.SetHunger(9);
	cout << "\nCalling GetHunger(): " << crit.GetHunger() << ".\n";
}
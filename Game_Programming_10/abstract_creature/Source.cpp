// Demonstrates abstract classes

#include <iostream>

using namespace std;

class Creature
{
public:
	Creature(int health = 100);
	virtual void Greet() const = 0;
	virtual void DisplayHealth() const;

protected:
	int m_Health;
};

Creature::Creature(int health) :m_Health(health)
{}

void Creature::DisplayHealth() const
{
	cout << "My health is " << m_Health << " points.\n";
}

class Orc :public Creature
{
public:
	Orc(int health = 120);
	virtual void Greet() const;
};

Orc::Orc(int health) : Creature(health)
{}

void Orc::Greet() const
{
	cout << "The orc grunts hello.\n";
}

int main()
{
	Creature* pCreature = new Orc();
	pCreature->Greet();
	pCreature->DisplayHealth();
}
// Demonstrates friend function and operator overloading

#include <iostream>
#include<string>

using namespace std;

class Critter
{
	friend void Peek(const Critter& aCritter);
	friend ostream& operator<<(ostream& os, const Critter& aCritter);

public:
	Critter(const string& name = "");

private:
	string m_Name;
};

Critter::Critter(const string& name):m_Name(name)
{}

void Peek(const Critter& aCritter)
{
	cout << aCritter.m_Name << endl;
}

ostream& operator<<(ostream& os, const Critter& aCritter)
{
	os << "Criter Object - ";
	os << "m_Name: " << aCritter.m_Name;

	return os;
}

int main()
{
	Critter crit("Poochie");
	cout << "Calling Peek() to access crit's private data member, m_Name:\n";
	Peek(crit);

	cout << "\nSending crit object to cout with << operator.\n";
	cout << crit << endl;
}
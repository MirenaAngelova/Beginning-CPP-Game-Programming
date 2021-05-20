// Demonstrates iterators

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "You trade your sword for a battle axe.\n";
	myIterator = inventory.begin();
	*myIterator = "battle axe";

	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nThe item name '" << *myIterator << "' has "
		<< (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name '" << *myIterator << "' has "
		<< myIterator->size() << " letters in it.\n";

	cout << "\nYou recover a crossbow from a slain enemy.\n";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nYour armor has destroyed in a fierce battle.\n";
	inventory.erase(inventory.begin() + 2);
	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}
}
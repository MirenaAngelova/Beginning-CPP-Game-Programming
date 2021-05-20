// Demonstrates calling and overrridng base member functions

#include <iostream>

using namespace std;

class Enemy
{
public:
	int damage;
	Enemy(int damage = 10);
	void virtual Taunt() const;
	void virtual Attack() const;
private:
	int m_Damage;
};

Enemy::Enemy(int damage):m_Damage(damage)
{}

void Enemy::Taunt() const
{
	cout << "The enemy says he will fight you.\n";
}
void Enemy::Attack() const
{
	cout << "Attack inflicts " << m_Damage << " damage points.\n";
}

class Boss : public Enemy
{
public:
	Boss(int damage = 30);
	void virtual Taunt() const;
	void virtual Attack() const;
};

Boss::Boss(int damage) : Enemy(damage)
{}

void Boss::Taunt() const
{
	cout << "The boss says he will end your pitful existence.\n";
}

void Boss::Attack() const
{
	Enemy::Attack();
	cout << "And laughs heartily at you.\n";
}
int main()
{
	cout << "Enemy object:\n";
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.Attack();

	cout << "Boss object:\n";
	Boss aBoss;
	aBoss.Taunt();
	aBoss.Attack();
}
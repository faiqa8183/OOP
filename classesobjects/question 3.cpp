#include<iostream>
using namespace std;
class player
{
private:
	int health;
public:
	player()
	{
		health = 0;
	}
	void sethealth(int heal)
	{
		health = heal;
	}
	int gethealth()
	{
		return health;
	}
	void healthchange()
	{
		health = health - 2;
		cout << "decreasing health  " << this->gethealth() << endl;
		health = health + 1;
		cout << "increasing health " << this->gethealth();
	}
};
int main()
{
	player p;
	p.sethealth(10);
	p.healthchange();
}

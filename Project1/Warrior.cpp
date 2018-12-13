#include "Warrior.h"
#include <iostream>
#include <string>

using namespace std;

Warrior::Warrior()
{
	cout << "A Warrior is born!" << endl;
}

void Warrior::setName(string newName)
{
	name = newName;
}

string Warrior::getName()
{
	return name;
}

Warrior::~Warrior()
{
}

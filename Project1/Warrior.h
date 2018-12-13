#pragma once
#include "HumanBaseParent.h"

class Warrior :
	public HumanBaseParent
{
public:
	Warrior(); // Constructor
	
	void setName(string newName);
	string getName();
	~Warrior(); // Destructor

private:
	string name;
};


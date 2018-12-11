#include "HumanBaseParent.h"
#include <iostream>
#include <string>

using namespace  std;


HumanBaseParent::HumanBaseParent()
{
}

void HumanBaseParent::talk(string dialog)
{
	cout << dialog << endl;
}

void HumanBaseParent::move(string newLocation)
{
	cout << "I am moving to " << newLocation << endl;
}

HumanBaseParent::~HumanBaseParent()
{
}

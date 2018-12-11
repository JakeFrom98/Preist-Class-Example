#pragma once
#include <string>

using namespace std;

class HumanBaseParent
{
public:
	HumanBaseParent(); // Constructor - no return types - always same name as the class - Runs Automatically!

	void talk(string dialog);
	void move(string newLocation);

	~HumanBaseParent(); // Destructor - clean up

private:

};

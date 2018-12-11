#include <iostream>
#include <string>
#include "PreistSubChild.h"

using namespace std;

void main()
{
	// Make an object
	// Classname obectname
	PreistSubChild Jacob;

	Jacob.talk("Jacob Says Something profound...");
	Jacob.move("Cafe...");
	Jacob.bless();

	PreistSubChild Aaron;
	Aaron.talk("Have a great day!");
	Aaron.bless();

	system("pause");
}
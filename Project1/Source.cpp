#include <iostream>
#include <string>
#include "PreistSubChild.h"
#include "Warrior.h"

using namespace std;

void main()
{
	// Make an object
	// Classname obectname
	PreistSubChild Jacob;

	string whoToBless;
	cout << "Who would you like to bless? ";
	getline(cin, whoToBless);

	Jacob.talk("Jacob Says Something profound...");
	Jacob.move("Cafe...");
	Jacob.bless(whoToBless);

	cout << "Who would you like to bless? ";
	getline(cin, whoToBless);

	PreistSubChild Aaron;
	Aaron.talk("Have a great day!");
	Aaron.bless(whoToBless);

	Warrior Michael;
	Michael.setName("Hulk");

	Warrior Nate;
	Nate.setName("Batman");

	Nate.talk("Batman says, Come on Hulk! Let's get them!"); // Using inheritance because talk belongs to humanParentBase class

	system("pause");
}
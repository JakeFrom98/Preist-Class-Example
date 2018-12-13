#include "PreistSubChild.h"
#include  <iostream>

using namespace std;

// This is the constructor
PreistSubChild::PreistSubChild()
{
	cout << "A Priest is born!" << endl;
}

void PreistSubChild::bless(string whoToBless)
{
	cout << "The Priest Blesses! " << whoToBless << endl;
}



PreistSubChild::~PreistSubChild()
{
}

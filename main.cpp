#include <iostream>
#include "Player2.h"
using namespace std;

int main()
{
	FPlayer* Player = new FPlayer();

	cout << Player << endl;
	delete Player; 
	return 0;
}
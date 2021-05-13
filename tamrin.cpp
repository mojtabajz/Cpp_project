# tamrin
#include <iostream>

using namespace std;

int main()
{
	int x=100;
	system("color 10");
	this_thread::sleep_for(chrono::milliseconds(x));	
	system("color 20");
	this_thread::sleep_for(chrono::milliseconds(x));	
	system("color 30");
	this_thread::sleep_for(chrono::milliseconds(x));	
	system("color 50");
	this_thread::sleep_for(chrono::milliseconds(x));	
	system("color 40");
	this_thread::sleep_for(chrono::milliseconds(x));
	system("color 60");
	this_thread::sleep_for(chrono::milliseconds(x));	
	system("color 70");
	this_thread::sleep_for(chrono::milliseconds(x));
	cout << "HELLO WORLD" << endl << "hi" << endl;
	
	return 1;
}

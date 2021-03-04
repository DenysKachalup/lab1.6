/////////////////////////
//Source. cpp
#include "Time.h"

using namespace std;
int main()
{
	Time s;

	s.Read();
	s.Display();
	cout << "Time:\n" << s.toString1();

	return 0;
}
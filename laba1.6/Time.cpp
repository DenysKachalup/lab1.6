//////////////////////////////////////////////////
///////////// Time.cpp
#include "Time.h"
#include<iostream>	

using namespace std;

void Time::setTriad1(Time::Triad tri)
{
	t1 = tri;
}
void Time::setTriad2(Time::Triad tri)
{
	t2 = tri;
}
void Time::Init(Time::Triad tri)
{
	setTriad1(tri);
}
void Time::Init2(Time::Triad tri)
{
	setTriad2(tri);
}
void Time::Read()
{
	int t1first ;
	int t1second ;
	int t1third ;
	int t2first;
	int t2second ;
	int t2third ;
	Triad g, f;
	do {
		do
		{
			cout << "Triad 1 : " << endl << endl;
			g.Read();
			Init(g);
			cout << "Triad 2 : " << endl << endl;
			f.Read();
			Init2(f);

			
		} while (!t1.Poriv(g, f));

		t1first = t1.getF();
		t1second = t1.getS();
		t1third = t1.getT();
		t2first = t2.getF();
		t2second = t2.getS();
		t2third = t2.getT();

	} while (!Poriv1(t1first,t1second, t1third, t2first, t2second, t2third));

}
void Time::Display()
{
	cout << endl;
	t1.Display();
	t2.Display();
	t1.Poriv(t1, t2);
}
bool Time::Poriv1(int t1first, int t1second,int t1third,int t2first, int t2second, int t2third)
{
	/*int t1first = t1.getF();
	int t1second = t1.getS();
	int t1third = t1.getT();
	int t2first = t2.getF();
	int t2second = t2.getS();
	int t2third = t2.getT();*/

	if ((t1first == t2first || t1first > t2first) && t1second == t2second &&
		t1third > t2third && (t1second > t2second || t1first == t2first))
		return true;
	else
		return false;
}
void Time:: Triad::setF(int value)
{
	first = value;
}
void Time::Triad::setS(int value)
{
	second = value;
}
void Time::Triad::setT(int value)
{
	third = value;
}
void Time::Triad::Init(int value1, int value2, int value3)
{
	setF(value1);
	setS(value2);
	setT(value3);
}
void Time::Triad::Read()
{
	int value1, value2, value3;
	cout << "Vvedit first: "; cin >> value1;
	cout << "Vvedit second: "; cin >> value2;
	cout << "Vvedit third: "; cin >> value3;
	cout << endl;
	Init(value1, value2, value3);
	cout << endl;
}
void Time::Triad::Display()
{
	cout << "first = " << getF() << "\tsecond = " << getS() << "\tthird = " << getT() << endl;
}
bool Time::Triad::Poriv(Triad t1, Triad t2)
{
	if (t1.first == t2.first && t1.second == t2.second && t1.third > t2.third)
		return true;

	else
		return false;
}


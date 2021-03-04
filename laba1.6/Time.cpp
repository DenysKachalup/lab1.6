//////////////////////////////////////////////////
///////////// Time.cpp
#include "Time.h"
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

void Time::setTriad1(Triad tri)
{
	triad = tri;
}
void Time::Init1(Triad tri)
{
	setTriad1(tri);
}
void Time::Read()
{
	do
	{
		Triad g, f;
		cout << "Triad 1 : " << endl << endl;
		g.Read();
		cout << "Triad 2 : " << endl << endl;
		f.Read();
		Init1(triad.Equals(g, f));
	} while (!Equal());
}
string Time::toString1() const
{
	stringstream sout;
	sout << getF() << "god " << getS() << "hv " << getT() << "s \t\t" << getF() << " : "
		<< getS() << " : " << getT() << endl;
	return sout.str();
}
void Time::Display() const
{
	cout << endl;
	triad.Display();
	cout << triad.toString() << endl;
}

bool Time::Equal()
{
	if ((triad.getF() >= 0 && triad.getF() <= 23) &&
		(triad.getS() >= 0 && triad.getS() <= 59) && (triad.getT() >= 0 && triad.getT() <= 59))
		return true;
	else
		return false;
}
void Time::Triad::setF(int value)
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

	cout << "first: "; cin >> value1;
	cout << "second: "; cin >> value2;
	cout << "third: "; cin >> value3;
	cout << endl;

	Init(value1, value2, value3);
	cout << endl;
}

string Time::Triad::toString() const
{
	stringstream sout;
	sout << "toString\nfirst = " << getF() << "\tsecond = " << getS() << "\tthird = " << getT() << endl;
	return sout.str();
}

void Time::Triad::Display() const
{
	cout << "Triad: " << endl;
	cout << "first = " << getF() << "\tsecond = " << getS() << "\tthird = " << getT() << endl << endl;
}
Time::Triad Time::Triad::Equals(Triad t1, Triad t2)
{
	if ((t1.first > t2.first || t1.first == t2.first) &&
		(t1.second > t2.second || t1.first == t2.first) &&
		t1.second == t2.second && t1.third > t2.third)
		return t1;
	else
		return t2;
}



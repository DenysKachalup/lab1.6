///////////////////////////////////
/////// Time.h
#pragma once
class Time
{
private:
	class Triad
	{
	private:
		int first, second, third;
	public:
		void setF(int value);
		void setS(int value);
		void setT(int value);
		int getF() const { return first; }
		int getS() const { return second; }
		int getT() const { return third; }

		bool Poriv(Triad t1, Triad t2);

		void Init(int value1, int value2, int value3);
		void Read();
		void Display();

	}; 
	Triad t1,t2;
public:
	int getTriadF1() const { return t1.getF(); }
	int getTriadS1() const { return t1.getS(); }
	int getTriadT1() const { return t1.getT(); }

	int getTriadF2() const { return t2.getF(); }
	int getTriadS2() const { return t2.getS(); }
	int getTriadT2() const { return t2.getT(); }

	void setTriad1(Time::Triad tri);
	void setTriad2(Time::Triad tri);

	bool Poriv1(int t1first, int t1second, int t1third, int t2first, int t2second, int t2third);
	void Init(Time::Triad tri);
	void Init2(Time::Triad tri);
	void Read();
	void Display();
};




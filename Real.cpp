//Real.cpp
#include "Real.h"
#include "Number.h"
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>


using namespace std;

void Real::Init(double stepin1, double stepin2)
{
	y1 = stepin1;
	y2 = stepin2;
}
void Real::Read()
{
	double y_1, y_2;
	cout << endl;
	cout << "stepin do yakoho pidnosyty pershyi vyraz: "; cin >> y1;
	cout << "stepin do yakoho pidnosymo druhyi vyraz: "; cin >> y2;
	Init(y1, y2);
}
void Real::Display()
{
	cout << endl;
	l.Display();
	cout << "stepin do yakoho pidnosyty pershyi vyraz: " << y1 << endl;
	cout << "stepin do yakoho pidnosymo druhyi vyraz: " << y2 << endl;
	cout << "rezultat pidnesennya do stepennya pershoho vyrazu: " << Step1() << endl;
	cout << "rezultat pidnesennya do stepennya druhoho vyrazu: " << Step2() << endl;
	cout << "rezultat logaryfmuvannya pershoho vyrazu: " << Log1() << endl;
	cout << "rezultat logaryfmuvannya druhoho vyrazu: " << Log2() << endl;
}
double Real::Step1()  //піднесення до степення у1 1-го виразу
{
	return pow(l.getDodanok1(), y1);
}
double Real::Step2()  //піднесення до степеня у2 2-го виразу
{
	return pow(l.getDodanok2(), y2);
}
double Real::Log1()   //логарифмування 1-го виразу
{
	return log10(l.getDodanok1());
}
double Real::Log2()    //логарифмування 2-го виразу
{
	return log10(l.getDodanok2());
}
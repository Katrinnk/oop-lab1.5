#pragma once

#include "Number.h"


class Real
{
public:
	Number l;
	double y1, y2;
public:
	double getStepin1() const { return y1; }
	double getStepin2() const { return y2; }
	Number get_l() const { return l; }

	void setStepin1(double value) { y1 = value; }
	void setStepin2(double value) { y2 = value; }
	void set_l(Number value) { l = value; }

	void Init(double, double);
	void Read();
	void Display();

	double Step1();
	double Step2();
	double Log1();
	double Log2();

};



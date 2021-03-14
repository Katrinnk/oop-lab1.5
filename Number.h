#pragma once
class Number
{
public:
	float x1, x2;
public:
	int getDodanok1() const { return x1; }
	int getDodanok2() const { return x2; }

	void setDodanok1(double value) { x1 = value; }
	void setDodanok2(double value) { x2 = value; }

	void Init(float, float);
	void Read();
	void Display();

	float Div_x1_x2();
	float Div_x2_x1();
	float Sum();

};


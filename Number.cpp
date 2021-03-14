#include "Number.h"
#include <iostream>

using namespace std;

void Number::Init(float dodanok1, float dodanok2)
{
	x1 = dodanok1;
	x2 = dodanok2;
}
void Number::Read()
{
	float x1, x2;
	cout << endl;
	cout << "dodanok1= "; cin >> x1;
	cout << "dodanok2= "; cin >> x2;
	cout << endl;
	Init(x1, x2);
}
void Number::Display()
{
	cout << endl;
	cout << "dodanok1= " << x1 << endl;
	cout << "dodanok2= " << x2 << endl;
	cout << "suma dodankiv= " << Sum() << endl;
	cout << "dilennya(pershoho na ddruhyi)= " << Div_x1_x2() << endl;
	cout << "dilennya(druhuhu na pershyi)= " << Div_x2_x1() << endl;
}
float Number::Sum()
{
	return x1 + x2;

}
float Number::Div_x1_x2()   //метод ділення першого на другий
{
	return  x1 / x2;
}
float Number::Div_x2_x1() //метод ділення другого на перший
{

	return x2 / x1;
}
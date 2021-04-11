//Pair.cpp
#include "Pair.h"
#include <iostream>
using namespace std;
int Pair::dobutok() {
	Pair r(*this);
	return r.getA() * r.getB();
}
void Pair::Init(int a, int b)
{
	setA(a);
	setB(b);
}
void Pair::Display() const
{
	cout << endl;
	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;
}
void Pair::Read()
{
	int a;
	int b;
	cout << endl;
	cout << "Input x... "; cin >> a;
	cout << "Input y... "; cin >> b;
	Init(a, b);
}
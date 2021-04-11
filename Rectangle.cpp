//Rectangle.cpp
#include "Rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;
int Rectangle::perimetr() {
	Pair r(pair);
	return 2 * (r.getA() + r.getB());
}
int Rectangle::square() {
	Pair r(pair);
	return r.getA() * r.getB();

}
void Rectangle::Init(Pair pair)
{
	setPair(pair);
}
void Rectangle::Display() const
{
	pair.Display(); 
}
void Rectangle::Read()
{
	Pair p;
	cout << endl;
	cout << "Pair -> " << endl;
	p.Read(); 
	Init(p);
}

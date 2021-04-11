//Source.cpp
#include "Rectangle.h"
using namespace std;
int main()
{
	Pair p;
	p.setA(2);
	p.setB(4);
	Rectangle r;
	r.setPair(p);
	r.Display();
	return 0;
}
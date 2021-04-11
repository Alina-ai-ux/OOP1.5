//Rectangle.h
#pragma once
#include <string>
#include "Pair.h"
using namespace std;
class Rectangle
{
private:
	Pair pair;
public:
	Pair getPair() const { return pair; }
	int square();
	int perimetr();
	void setPair(Pair pair) { this->pair = pair; }
	void Init(Pair pair);
	void Display() const;
	void Read();
};


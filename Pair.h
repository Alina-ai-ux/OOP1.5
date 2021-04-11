//Pair.h
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pair {
private:
	int a, b;
public:
	int getA() const { return a; }
	int getB() const { return b; }
	void setA(const int value) { a = value; }
	void setB(const int value) { b = value; }
	int dobutok();
	void Init(int a, int b);
	void Display() const;
	void Read();

};


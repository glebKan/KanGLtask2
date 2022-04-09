#include <iostream>
#include "ukaz.h"
int main()
{
	int x[10] = { 2,3,-8,8,-97,8,-7 };
	void(*z)(int* x, int size);
	cik(x, 10);
	ran(x, 10);
	cik(x, 10);
	z = fun(x, 10);
	z(x, 10);
	fun(x, 10)(x,10);
	
}
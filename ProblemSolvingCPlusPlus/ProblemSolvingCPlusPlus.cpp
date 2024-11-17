#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ConvertToCPlusClass.cpp"
#include "Arithmatic.cpp"
//#include "Functions.cpp"
//#include "ParameterPassing.cpp"
//#include "ArrayParameter.cpp"
//#include "StructureParameter.cpp"
using namespace std;
void func2() {
	int x;
	float y;
}
void func1() {
	int z;
}
int main()
{	
	int v;
	func1();
	func2();
	int* p = (int*)malloc(sizeof(int) * 5);// new int[5];
	delete[]p;//delete allocated in memory
	//or
	p = NULL;//make pointer allocated in stack with null

	return 0;
}


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

int main()
{	
	Rectangle r(1, 1);
	cout << r.Area() << endl;
	Arithmatic<int> ar(1,1);
	cout<< ar.Add(5, 6)<<endl;

	Arithmatic<float> ar2;
	cout << ar2.Add(1.555555555, 1.7777777) << endl;

	int sum = 0;
	int arr[] = { 1,2,3,4,5 };
	for (auto x : arr) {
		sum += x;
	}
	cout << sum << endl;
	return 0;
}


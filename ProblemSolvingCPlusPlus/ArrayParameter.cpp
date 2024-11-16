#include <iostream>
using namespace std;
class ArrayParameter {
public:
	//Pass by address
	void PrintArr(int Arr[], int n) {
		for (int i = 0;i < n;i++)
		{
			cout << Arr[i] << endl;
			Arr[i] = 0;
		}
	}
	//init array in heap
	int* ReturnArr(int n) 
	{
		int* Arr;//in stack points to heap
		Arr = (int*)malloc(n * sizeof(int));
		return Arr;
	}
	/*
	//int Arr[] = { 1,2,3,4,5,6 };
	int n = 6;
	ArrayParameter AP;
	int *Ptr=AP.ReturnArr(n);
	for (int i = 0;i < n;i++)
	{
		Ptr[i] = i;
		cout << Ptr[i] << endl;
	}
	*/


};
#include "PointerToStructure.cpp"
struct ArrayStruct {
	int Arr[5];
	int n;
};
class StructureParameter {
public:
	int Area(Rectangle r) {
		return r.Length*r.Breadth;
	}
	void ArrayStruct_PassByVal(ArrayStruct arrayStruct) {
		arrayStruct.Arr[0] = 5;
		arrayStruct.Arr[1] = 20;
	};
	void ArrayStruct_PassByReff(struct ArrayStruct* arrayStruct) {
		arrayStruct->Arr[0] = 5;
		arrayStruct->Arr[1] = 20;
	};
	void Intialize(Rectangle *r, int len, int breadth) {
		r->Length = len;
		r->Breadth = breadth;
	}
	void ChangeLength(Rectangle *r,int len) {
		r->Length = len;
	}
	/*
StructureParameter sP;
Rectangle r = { 10,5 };
cout << sP.Area(r) << endl;
ArrayStruct arrStruct = { {1,2,3,4,5},5 };
sP.ArrayStruct_PassByVal(arrStruct);
sP.ArrayStruct_PassByReff(&arrStruct);
*/
};


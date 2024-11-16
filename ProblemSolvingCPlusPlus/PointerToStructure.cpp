#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int Length;//2 bytes
    int Breadth;//2 bytes
};

class PointerToStructure {
public:
    void Method() {
        Rectangle r = { 10,5 };
        Rectangle* P = &r;
        cout << r.Length << endl;
        cout << r.Breadth << endl;
        cout << P->Length << endl;
        cout << (*P).Length << endl;
        Rectangle* Ptr2 = (Rectangle*)(malloc(sizeof(Rectangle)));//to store in heap
        Ptr2->Breadth = 80;
        Ptr2->Length = 90;

        cout << Ptr2->Length << endl;
        cout << Ptr2->Breadth << endl;

        Rectangle* PtrToHeap = (Rectangle*)(malloc(sizeof(Rectangle)));
        PtrToHeap->Length = 10000;
        PtrToHeap->Breadth = 20000;
        cout << "Length =  " << PtrToHeap->Breadth << " , Breadth = " << PtrToHeap->Breadth << endl;
    }
};
class ParamterPass {
public:
	/*
	* //Pass by address
	void Swap(int* a, int* b) {
		int temp;
		temp = *b;
		*b = *a;
		*a = temp;
	}*/
	//called by referrence
	/*
	ParamterPass PP;
    int f = 10, g = 15;
    //PP.Swap(&f, &g);
    PP.Swap(f, g);
    cout << "F = " <<f << " , G = " <<g<< endl;
	*/
	void Swap(int& a, int& b) {
		int temp;
		temp = b;
		b = a;
		a = temp;
	}
};
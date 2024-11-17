template <class T>
class Arithmatic {
private:
	T a; T b;
public:
	Arithmatic();
	Arithmatic(T a, T b);
	T Add(T a, T b);
	T Sub(T a, T b);
};
template <class T>
Arithmatic<T>::Arithmatic() {
}
template <class T>
Arithmatic<T>::Arithmatic(T a, T b) {
	this->a = a;
	this->b = b;
}
template <class T>
T Arithmatic<T>::Add(T a, T b) {
	return a + b;
}
template <class T>
T Arithmatic<T>::Sub(T a, T b) {
	return a - b;
}

/*
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

*/
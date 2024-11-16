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
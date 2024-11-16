#include <iostream>
using namespace std;
class Rectangle {
private:
	int _length;
	int _breadth;
public:
	Rectangle();
	Rectangle(int l, int b);
	int Area();
	void ChangeLength(int l);
	~Rectangle();
};
Rectangle::Rectangle() {
	_length = _breadth = 1;
}

Rectangle::Rectangle(int l, int b) {
	_length = l;
	_breadth = b;
}

int Rectangle::Area() {
	return _length * _breadth;
}

void Rectangle::ChangeLength(int l) {
	_length = l;
}

Rectangle::~Rectangle() {
	cout << "Destructor" << endl;
}
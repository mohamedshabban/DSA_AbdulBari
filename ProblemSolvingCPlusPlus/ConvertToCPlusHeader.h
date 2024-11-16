class Rectangle {
private:
    int _length;
    int _breadth;
public:
	private:
		int _length;
		int _breadth;
	public:
		Rectangle() {
			_length = _breadth = 1;
		}
		Rectangle(int l, int b) {
			_length = l;
			_breadth = b;
		}
		int Area() {
			return _breadth * _length;
		}
		void ChangeLength(int l) {
			_length = l;
		}
	
};

#include<bits/stdc++.h>
using namespace std;

class Rectangle {
	public:
	int len, brth;
	
	int area() {
		return len*brth;
	}
	int perimeter() {
		return 2*(len+brth);
	}
};

int main() {
	Rectangle r1, r2; // stack
	Rectangle *q = new Rectangle(); // heap
	Rectangle *p;
	p = &r1;
	p -> len = 10;
	p -> brth = 3;
	cout << p->area() << endl;
	r1.len = 10;
	r1.brth = 2;
	cout << "AREA " << r1.area() << endl;
	r2.len = 4;
	r2.brth = 20;
	cout << r2.area();
}

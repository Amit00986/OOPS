// constructor 
// default constructor // compiler provided constructor
// Non parametrize
// parametrize
// copy constructor
#include<bits/stdc++.h>
using namespace std;

class Rectangle {
	private:
	
	int length;
	int breadth;
	
	public:
		Rectangle() {
		length = 0; // Non parameter constructor
		breadth = 0;
		}
		Rectangle(int l, int b) {
			setLength(l); // parameter constructor
			setBreadth(b);
		}
		
		Rectangle(Rectangle(&r)) { // copy constructor
			length = r.length;
			breadth = r.breadth;
		}
		void setLength(int l){
			if(l >= 0) {
			    length = l;
			}
			else {
				cout << "Length can't be negative "<<endl; 
			}	
		}
		void setBreadth(int b) {
		if(b>=0) {
			    breadth = b;
			}
			else {
				cout << "Breadth can't be negative "<<endl; 
			}
		}
		int getLength() {
			return length;
		}
		int getBreadth() {
			return breadth;
		}
		
		int area() {
		return length*breadth;
	}
	
	int perimeter() {
		return 2*(length+breadth);
	}	
		
};

int main() {
	Rectangle r;
	Rectangle r1;
//	Rectangle r3(10, 5);
	cout <<r1.area();	
	Rectangle r2(r);
}




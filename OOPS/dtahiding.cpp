// getter = Accessor 
//and setter = mutator function
#include<bits/stdc++.h>

using namespace std;

class Rectangle {
	private:
		int length;
		int breadth;
			
	public:
		
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
	Rectangle r(10,5);
	Rectangle *q = new Rectangle();
	q = &r;
//	q -> setLength(10);
//	q -> setBreadth(5);
//	
	cout << q->area() << endl;
	cout << q->getLength() << endl;
	cout << q ->getBreadth() << endl;
	
}


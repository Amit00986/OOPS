#include<bits/stdc++.h>
// static function
using namespace std;

class Student{
	public:
		int roolNo;
		string name;
	static int addminNo;
	Student(string n) {
	
		addminNo++;
		roolNo = addminNo;
			name = n;
		
	}
	void display() {
		cout << "Name " << name << endl << " Roll " << roolNo << endl;
	}	
};
 int Student :: addminNo = 0;
 
int main() {
	Student s1 ("ram");
	Student s2 ("ramj");
	s1.display();
	s2.display();
	cout << Student::addminNo;
}

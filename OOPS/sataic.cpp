#include<bits/stdc++.h>
using namespace std;

class Test {
	private:
		int a;
		int b;
	public:
	static int cnt; // memory allocates only one time AND alll the object share that
	// data memeber
	
	Test() {
		a = 10;
		b = 10;
		cnt++;
	}
	static int getCount() { // it can accaess only static data member
		return cnt;
	}	
};
int Test :: cnt = 0; // declare the static data memeber

int main() {
	Test t1;
	Test t2;
	cout << t1.cnt << " ";// used by object both way static data memeber
	cout << Test::getCount() ; // used by class
	
}

#include<bits/stdc++.h>
using namespace std;
void convert(int , int);
int main() {
	int num;
	cout << " Enter a positive number " << endl;
	cin >>num;
	//convert(num, 2);
	//convert(num, 8);
	convert(num, 16);
}

void convert(int num, int base){
	int rem = num%base;
	if(num == 0)
	     return ;
	convert(num/base, base);
	if(rem < 10)
	   printf("%d", rem);
	else 
	  printf("%c", rem-10+'A');       	     
}

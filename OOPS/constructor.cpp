#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int length; // data member
    int breadth; // data member

public:
    Rectangle(); // default constructor
    Rectangle(int l, int b); // parametrize constructor
    Rectangle(Rectangle &r); // copy constructor
    int getLength() { return length; } // get the value
    int getBreadth() { return breadth; } // get the value
    void setLength(int l); // set the value
    void setBreadth(int b); // set the value
    int area(); // member function
    int perimeter(); // member function
    bool isSquare();//
    ~Rectangle(); // Destructor
};
int main() {
    Rectangle r1(10, 10);
    cout << "Area " << r1.area() << endl;
    if (r1.isSquare())
        cout << "Yes" << endl;
    else 
       cout << " NO " << endl;    
}
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreadth(int b)
{
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroy";
}
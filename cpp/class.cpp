#include <iostream>

// To use c in and c out functions
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // First constractor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    };

    int area();

    // // Destractor
    // Rectangle::~Rectangle(){

    // };
};

// scope resolution
int Rectangle::area()
{
    return length * breadth;
};

int main()
{
    Rectangle r(30, 15);

    cout << r.area();
}
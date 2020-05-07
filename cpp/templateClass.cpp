#include <iostream>

// To use c in and c out functions
using namespace std;

template <class T>
class Rectangle
{
private:
    T length;
    T breadth;

public:
    // First constractor
    Rectangle(T l, T b)
    {
        length = l;
        breadth = b;
    };

    T area();

    // // Destractor
    // Rectangle::~Rectangle(){

    // };
};

// scope resolution
template <class T>
T Rectangle<T>::area()
{
    return length * breadth;
};

int main()
{
    Rectangle<float> r(30.0, 15.3);

    cout << r.area();

    Rectangle<int> x(30, 15);

    cout << x.area();
}
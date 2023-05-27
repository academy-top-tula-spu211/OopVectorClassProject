#include <iostream>
#include "Vector.cpp"
#include "Array.cpp"
#include "Math.h"
#include "Storage.cpp"

int main()
{
    Array<int> a;
    Vector<int> v(10);

    Math::Sum<int, int>(10, 20);

    Storage<int> s1(10);
    Storage<double> s2(10.25);
    s1.Print();
    s2.Print();
}

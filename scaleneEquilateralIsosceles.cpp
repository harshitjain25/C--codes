#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "Enter 3 sides of triangle: ";
    cin >> a >> b >> c;

    (a == b && b == c) ? cout << "It is an Equilateral Triangle" : (a != b && b != c && c != a) ? cout << "It is a Scalene Triangle"
                                                                                                : cout << "It is an Isosceles Triangle";
    return 0;
}
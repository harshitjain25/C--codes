#include <iostream>
using namespace std;
int main()
{
    int a;
    do
    {
        cout << "Enter 1 to find area of triangle\nEnter 2 to find area of circle\nEnter 3 to find area of rectangle\nEnter 4 to find area of square\n";
        cin >> a;
        if (a == 1)
        {
            int height, base;
            float AT;
            cout << "Enter height and base of triangle resp.:";
            cin >> height >> base;
            AT = base * height / 2;
            cout << "area of triangle is " << AT << "\n";
        }
        else if (a == 2)
        {
            int r;
            float AC;
            cout << "Enter radius of circle:";
            cin >> r;
            AC = 3.14 * r * r;
            cout << "area of circle is " << AC << "\n";
        }
        else if (a == 3)
        {
            int l, b, AR;
            cout << "Enter length and breadth of rectangle resp.:";
            cin >> l >> b;
            AR = l * b;
            cout << "area of rectangle is " << AR << "\n";
        }
        else if (a == 4)
        {
            int s, AS;
            cout << "Enter side of square:";
            cin >> s;
            AS = s * s;
            cout << "area of square is " << AS << "\n";
        }
        else
        {
            cout << "wrong input\n";
        }
    } while (a == 4);
    return 0;
}
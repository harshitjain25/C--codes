#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{

    int m;
    int t = 0;

    m = n;
    if (n > 0)
    {
        int c = 0, x, y;

        while (n > 0)
        {
            n = n / 10;
            c++;
        }

        x = m % 10;
        y = x * pow(10, c - 1);
        m = m / 10;

        return y + reverse(m);
    }
    return 0;
}
int main()
{
    int a;
    cout << "Enter a NUmber: ";
    cin >> a;
    cout << reverse(a);
    return 0;
}
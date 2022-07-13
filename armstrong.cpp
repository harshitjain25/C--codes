#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int l, m, n, x, sum = 0, count = 0;

    cout << "enter a number ";
    cin >> n;
    m = n;
    l = n;
    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        count++;
    }

    while (m > 0)
    {
        x = m % 10;
        m = m / 10;

        sum = sum + pow(x, count);
    }

    if (sum == l)
        cout << "armstrong";
    else
        cout << "not armstrong";
    return 0;
}
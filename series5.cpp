// x+x^2+x^3+x^4+x^5+.........x^n
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, n, i, sum = 0;
    cin >> x >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i);
    }
    cout << sum;
    return 0;
}
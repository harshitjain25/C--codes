// 2^2+3^3+4^4+5^5+.......
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        sum = sum + pow(i, i);
    }
    cout << "sum is" << sum;
}
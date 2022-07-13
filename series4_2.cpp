#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    if (n % 2 == 0)
    {
        sum = -1 * n / 2;
    }
    else
        sum = (-1 * (n - 1) / 2) + n;
    cout << sum;
    return 0;
}
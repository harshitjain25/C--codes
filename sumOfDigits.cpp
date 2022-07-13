#include <iostream>
using namespace std;
int main()
{
    int n, x, sum = 0;
    cin >> x;
    while (x > 0)
    {
        n = x % 10;
        x = x / 10;

        sum = sum + n;
    }
    cout << sum;
    return 0;
}
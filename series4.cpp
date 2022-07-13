//1-2+3-4+5-6+7-8..........
#include <iostream>
using namespace std;
int main()
{
    int n, sign = 1;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + sign * i;
        sign = sign * -1;
    }
    cout << sum;
    return 0;
}
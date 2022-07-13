// 2^2+4^2+6^2.....
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cin >> n;
    for (i = 2; i < n; i = i + 2)
    {
        sum = sum + i * i;
    }
    cout << "sum of series " << sum;
    return 0;
}

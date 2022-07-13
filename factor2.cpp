#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, count = 0;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
            count++;
        }
    }
    cout << "\nsum = " << sum;
    cout << "\ncount = " << count;
    return 0;
}
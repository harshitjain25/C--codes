#include <iostream>
using namespace std;
int main()
{
    int n, i, count=0;
    cin >> n;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "number entered is prime";
    }
    else
        cout << "not prime";
    return 0;
}
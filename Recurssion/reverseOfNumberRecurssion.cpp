#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{
    int t, l;
    static int k = 1;
    if (n > 0)
    {
        t = n % 10;
        l = reverse(n / 10);
        l = l + k * t;
        k = k * 10;
        return l;
    }
}
int main()
{
    int a;
    cout << "Enter a NUmber: ";
    cin >> a;
    cout << reverse(a);
    return 0;
}
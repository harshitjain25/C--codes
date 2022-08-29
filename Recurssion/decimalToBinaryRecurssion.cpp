#include <iostream>
using namespace std;
int convert(int n)
{
    static int k = 1;
    int m, l;
    if (n > 0)
    {

        m = n % 2 * k;
        k = k * 10;
        l = convert(n / 2) + m;
        return l;
    }
    return 0;
}
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << convert(a);
    return 0;
}
#include <iostream>
using namespace std;
int sum(int);
int happy(int);
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << happy(n);
    return 0;
}
int sum(int x)
{
    int g;
    g = x % 10;
    if (x > 0)
    {
        x = x / 10;
        g = g * g + sum(x);
    }
    return g;
}
int happy(int a)
{
    int k, s;
    k = sum(a);
    if (k > 10)
    {
        k = happy(k);
    }
    if (k == 1)
    {
        return 1;
    }
    else
        return 0;
}
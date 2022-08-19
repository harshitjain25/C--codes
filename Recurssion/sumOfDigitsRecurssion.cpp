#include <iostream>
using namespace std;
int sum(int);
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << sum(n);
    return 0;
}
int sum(int x)
{
    int t;
    if (x > 0)
    {
        t = x % 10;
        t = t + sum(x / 10);
    }
    return t;
}
#include <iostream>
using namespace std;
int mult(int, int);
int main()
{
    int x, n;
    cout << "Enter a number";
    cin >> x >> n;
    cout << mult(x, n);
    return 0;
}
int mult(int x, int n)
{
    int g = 1;
    if (n > 0)
    {
        g = x * mult(x, n - 1);
    }
    return g;
}
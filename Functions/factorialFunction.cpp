#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int x, factorial;
    cout << "\nEnter a number: ";
    cin >> x;
    factorial = fact(x);
    cout << "factorial = " << factorial;
    return 0;
}
int fact(int a)
{
    int f = 1;
    for (int i = a; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
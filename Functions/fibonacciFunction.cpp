#include <iostream>
using namespace std;
void fibonacci(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a = 0, b = 1, c;
    if (n == 1)
    {
        cout << " " << a;
    }
    else if (n >= 2)
    {
        cout << " " << a << " " << b;

        for (int i = 1; i <= n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << " " << c;
        }
    }
}
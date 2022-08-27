#include <iostream>
using namespace std;
void hailstone(int);
int main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    hailstone(a);
    return 0;
}
void hailstone(int n)
{
    cout << n << " ";
    if (n > 1)
    {
        if (n % 2 == 0)
        {
            hailstone(n / 2);
        }
        else if (n % 2 != 0)
        {
            hailstone(3 * n + 1);
        }
    }
}
#include <iostream>
using namespace std;
int lcm(int, int);
int main()
{
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;
    cout<<"LCM is = " << lcm(m, n) << "\n";
    return 0;
}
int lcm(int a, int b)
{
    int max,i;
    max = (a > b) ? a : b;
    for (i = max; i < a * b; i = i + max)
    {
        if (i % a == 0 && i % b == 0)
        {
            break;
        }
    }
    return i;
}
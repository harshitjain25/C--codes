#include <iostream>
using namespace std;
int main()
{
    int a, b, max, i;
    cin >> a >> b;
    max = (a > b) ? a : b;
    for (i = max; i <= a * b; i = i + max)
    {
        if (i % a == 0 && i % b == 0)
            break;
    }
    cout << "LCM is " << i;
    return 0;
}
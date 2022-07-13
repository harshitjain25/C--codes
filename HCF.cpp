#include <iostream>
using namespace std;
int main()
{
    int a, b, i,min;
    cin >> a >> b;
    min=(a<b)?a:b;
   
    for (i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            break;
    }
    cout << "HCF is " << i;
    return 0;
}
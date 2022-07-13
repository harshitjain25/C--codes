#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n, i;
    cin >> n;
    cout<<"0 1";
    for (i = 1; i <= n-2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout<<" " << c;
    }
    return 0;
}
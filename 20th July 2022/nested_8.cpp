#include <iostream>
using namespace std;
int main()
{
    int n, l;
    cin >> n;
    for (int i = 1, l = 2 * n - 3; i <= n; i++, l -= 2)     //l=l-2
    {
        cout << "\n";
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int s = 1; s <= l; s++)
        {
            cout << " ";
        }
        if (i < n)
        {
            for (int k = i; k >= 1; k--)
            {
                cout << k;
            }
        }
        else if (i == n)
        {
            for (int k = i - 1; k >= 1; k--)
                cout << k;
        }
    }
}
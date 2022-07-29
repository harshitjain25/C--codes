#include <iostream>
using namespace std;
int main()
{
    int m, n,temp;
    cout << "Enter size of first array\n";
    cin >> m;
    cout << "Enter size of second array\n";
    cin >> n;
    int a[m], b[n], c[m + n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }
    for (int i = 0; i < m + n - 1; i++)
    {
        for (int j = 0; j < m + n - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
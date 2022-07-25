#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter size of first array\n";
    cin >> m;
    cout << "Enter size of second array\n";
    cin >> n;
    int a[m], b[n], c[m + n];
    int count = 0;
    cout << "Enter elements of first array\n";
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Enter elements of second array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int j = 0; j < m; j++)
    {

        if (a[j] % 2 == 0)
        {
            c[count] = a[j];
            count++;
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (b[k] % 2 == 0)
        {
            c[count] = b[k];
            count++;
        }
    }
    for (int k = n-1; k >= 0; k--)
    {
        if (b[k] % 2 != 0)
        {
            c[count] = b[k];
            count++;
        }
    }
    for (int i = m-1; i >= 0; i--)
    {
        if (a[i] % 2 != 0)
        {
            c[count] = a[i];
            count++;
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
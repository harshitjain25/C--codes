#include <iostream>
using namespace std;
int main()
{
    int m, n, i = 0, j = 0, k = 0;
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
    for (i = m - 1, j = 0, k = 0; i >= 0, j < n;k++)
    {

        if (a[i] >= b[j])
        {
            c[k] = a[i];
            i--;
            
        }
        else if (a[i] < b[j])
        {
            c[k] = b[j];
            j++;
            
        }
    }
    for (; i >= 0; i--, k++)
    {
        c[k] = a[i];
    }
    for (; j < n; j++, k++)
    {
        c[k] = b[j];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
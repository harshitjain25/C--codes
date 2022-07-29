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
    while (i < m && j < n) // for (i = 0, j = 0, k = 0; i < m, j < n; k++)
    {

        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        c[k++] = a[i++];
    }
    while (j < n)
    {
        c[k++] = b[j++];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
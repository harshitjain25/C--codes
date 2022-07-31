#include <iostream>
using namespace std;
int main()
{
    int n, t, k, j = 0;
    cout << "enter the size of array\n";
    cin >> n;
    int a[n];
    cout << "enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the no of rotation\n";
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        t = a[n - 1];
        a[n - 1] = a[0];
        j = 0;
        while (j < n - 2)
        {
            a[j] = a[j + 1];
            j++;
        }
        a[n - 2] = t;

        for (int l = 0; l < n; l++)
        {
            cout << a[l] << " ";
        }
        cout << "\n";
    }
}
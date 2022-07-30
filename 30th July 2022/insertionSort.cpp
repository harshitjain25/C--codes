#include <iostream>
using namespace std;
int main()
{
    int t, i, j, n;
    cout << "Enter no. of elements: ";
    cin >> n;
    int a[n];
    cout << "enter elements of array \n";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        t = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > t)
            {
                a[j + 1] = a[j];
            }
            else
                break;
        }
        a[j + 1] = t;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0;
    cout << "Enter size of first array\n";
    cin >> n;
    cout << "Enter size of second array\n";
    cin >> m;
    if (m == n)
    {
        int a[n], b[m];
        cout << "Enter elements of array\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << "Enter elements of array\n";
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < m; i++)
        {
            cout << b[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                count++;
            }
            else
            break;
        }
        if (count == n)
        {
            cout << "\nARRAYS ARE SAME\n";
        }
        else
            cout << "\nARRAYS ARE NOT SAME\n";
    }
    else
        cout << "array are not same";
}
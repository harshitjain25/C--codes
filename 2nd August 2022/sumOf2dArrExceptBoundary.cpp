#include <iostream>
using namespace std;
int main()
{
    int m, n, sum = 0;
    cout << "Enter size of 2d Array:";
    cin >> m >> n;
    int a[m][n];
    cout << "Enter elements of Array\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < m - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            sum = sum + a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    cout << "Sum of all elements except boundary = " << sum;
    return 0;
}
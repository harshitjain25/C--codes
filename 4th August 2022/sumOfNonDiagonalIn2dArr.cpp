#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "enter the size of array\n";
    cin >> m;
    int a[m][m];
    cout << "enter the elements of array\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || j + i == m - 1)
                {}

            else
            {
                sum = sum + a[i][j];
            }
        }
    }
    cout << sum;
}
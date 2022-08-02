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
    for (int i = 0; i < m; i++)
    {
        sum = sum + a[i][0] + a[i][n - 1];
    }
    for (int j = 1; j < n - 1; j++)
    {
        sum = sum + a[0][j] + a[m - 1][j];
    }
    cout << "Sum of boundary elements = " << sum;
    return 0;
}
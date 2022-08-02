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
        sum = 0;
        for (int j = 0; j < n; j++)
        {

            sum = sum + a[i][j];
        }
        cout << "sum of row " << i + 1 << " = " << sum;
        cout << "\n";
    }
    return 0;
}
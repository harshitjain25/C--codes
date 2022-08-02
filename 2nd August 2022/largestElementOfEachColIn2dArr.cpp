#include <iostream>
using namespace std;
int main()
{
    int m, n, max;
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
    for (int j = 0; j < n; j++)
    {
        max = a[0][j];
        for (int i = 0; i < m; i++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        cout << "largest element in column " << j + 1 << " = " << max;
        cout << "\n";
    }
    return 0;
}
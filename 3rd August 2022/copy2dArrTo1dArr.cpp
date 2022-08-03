#include <iostream>
using namespace std;
int main()
{
    int m, n, k = 0;
    cout << "Enter size of 2d Array:";
    cin >> m >> n;
    int a[m][n], b[m * n];
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

        for (int j = 0; j < n; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }
    for (int i = 0; i < m * n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
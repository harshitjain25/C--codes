#include <iostream>
using namespace std;
int main()
{
    int m, n, temp, k;
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
        cout << "\n";

        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            temp = a[i][j + 1];
            for (k = j; k >= 0; k--)
            {
                if (a[i][k] > temp)
                {
                    a[i][k + 1] = a[i][k];
                }
                else
                    break;
            }
             a[i][k + 1] = temp;
        }
      
    }
    cout << "\n";
    cout << "Array after arranging\n";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";

        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    return 0;
}
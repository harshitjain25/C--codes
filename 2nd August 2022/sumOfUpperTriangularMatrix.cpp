#include <iostream>
using namespace std;
int main()
{
    int m, sum = 0;
    cout << "Enter size of 2d Array:";
    cin >> m >> m;
    int a[m][m];
    cout << "Enter elements of Array\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - i; j++) // for(j=i;j<m;j++)
        {                               //{
            sum = sum + a[i][i + j];    //   sum=sum+a[i][j];
        }                               //}
    }
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    cout << "\n";
    cout << "Sum of upper triangular matrix = " << sum;
    return 0;
}
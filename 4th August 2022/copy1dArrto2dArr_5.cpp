// 1 - d Array 4 1 2 6 
// 2 - d Array // 4  1  2  6 
               // 1  0  0  2
               // 2  0  0  1
               // 6  2  1  4 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of 1d Array:";
    cin >> n;
    int a[n], b[10][10] = {0};
    cout << "Enter elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
         b[i][0] = a[i];
         b[i][n-1]=a[n-i-1];
    }
    for (int j = 1; j < n-1; j++)
    {
        b[0][j]=a[j];
        b[n-1][j]=a[n-j-1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n";

        for (int j = 0; j < n; j++)
        {
            cout << b[i][j]<<" ";
        }
    }
    return 0;
}
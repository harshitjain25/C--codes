// 1 - d Array 4 1 2 6 
// 2 - d Array // 0  0  0  4 
               // 0  0  1  4
               // 0  2  1  4
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
        for (int j = n-1; j >= n- i-1; j--)
        {
            b[i][j] = a[n-j-1];
        }
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
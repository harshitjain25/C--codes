#include <iostream>
using namespace std;
int main()
{
    int m, n, sum = 0;
    cout<<"Enter size of 2d Array:";
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter elements of Array\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            sum = sum + a[i][j];
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
    cout<<"\n";
    cout << "Sum of all elements = " << sum;
    return 0;
}
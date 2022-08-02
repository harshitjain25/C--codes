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
        sum = sum + a[i][i] + a[i][m - 1 - i];
    }
    if (m % 2 != 0)
    {
        sum = sum - a[m / 2][m / 2];
    }
    cout << "sum of digonals is = " << sum;
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m,s=0;
//     cout<<"enter the size of array\n";
//     cin>>m;
//     int a[m][m];
//     cout<<"enter the elements of array\n";
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//         cin>>a[i][j];

//         if(i==j||i+j==m-1)
//         {
//         s+=a[i][j];

//         }
//         }
//     }
//     cout<<s;
// }
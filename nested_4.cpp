// 1
// 12
// 123
// 1234
// 123
// 12
// 1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
    }
    for(int m=n-1;m>=1;m--)
    {
        cout<<"\n";
        {
            for(int l=1;l<=m;l++)
            {
                cout<<l;
            }
        }

    }
    return 0;
}
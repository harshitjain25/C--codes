// 1
// 22
// 333
// 4444
// 55555
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = 1;j<=i ; j++)
        {
            cout << i;
        }
    }
    return 0;
}
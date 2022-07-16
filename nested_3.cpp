// 54321
// 4321
// 321
// 21
// 1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << "\n";
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
    }
    return 0;
}
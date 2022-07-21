#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        sum = sum + m;
    }
    cout << "sum = " << sum << "\n";
    return 0;
}
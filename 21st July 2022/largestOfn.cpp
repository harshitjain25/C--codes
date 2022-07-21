#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m, max = INT_MIN;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (m > max)
        {
            max = m;
        }
    }
    cout << max;
    return 0;
}
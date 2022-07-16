#include <iostream>
using namespace std;
int main()
{
    int m, n, count = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        count = 0;
        for (int j = i/2; j>= 2; j--)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
            if (count == 0)
            {
                cout << i << " is prime ";
            }
        
    }
}
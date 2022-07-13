#include <iostream>
using namespace std;
int main()
{
    int x, n, d, count = 0;
    cout << "Enter a number and digit d to which is to be counted ";
    cin >> n >> d;
    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        if (x == d)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, max, j, lcm;
    cout << "Enter number of Elements of Array: ";
    cin >> n;
    int a[n];
    cout << "Enter Elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    lcm = a[0];
    for (int i = 1; i < n; i++)
    {

        max = (lcm > a[i]) ? lcm : a[i];
        for (j = max; i <= lcm * a[i]; j++)
        {
            if (j % lcm == 0 && j % a[i] == 0)
            {
                break;
            }
        }
        lcm = j;
    }
    cout << "LCM is = " << lcm;
    return 0;
}
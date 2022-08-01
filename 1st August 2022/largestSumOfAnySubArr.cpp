#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN, sum = 0;
    cout << "Enter number of Elements of Array: ";
    cin >> n;
    int a[n];
    cout << "Enter Elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    cout << "largest sum of any subarray is = " << max;
}
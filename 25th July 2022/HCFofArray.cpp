#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, min = INT_MAX, product = 1, count;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int j = min; j >= 1; j--)
    {
        for (int k = 0; k < n; k++)
        {
            if (j % a[k] == 0)
                break;
        }

        cout << "HCF is: " << j;
        break;
    }
    return 0;
}
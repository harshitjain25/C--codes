#include <iostream>
using namespace std;
int main()
{
    int n, min, j, hcf;
    cout << "Enter number of Elements of Array: ";
    cin >> n;
    int a[n];
    cout << "Enter Elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    hcf = a[0];
    for (int i = 1; i < n; i++)
    {
        min = (hcf > a[i]) ? hcf : a[i];
        for (j = min; j >= 1; j--)
        {
            if (hcf % j == 0 && a[i] % j == 0)
            {
                break;
            }
        }
        hcf = j;
    }
    cout << "HCF is = " << hcf << "\n";
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cout << "Enter number of elements";
    cin >> n;
    int a[n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
   // if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            temp = a[n - i - 1];
            a[n - i - 1] = a[n / 2 - i - 1];
            a[n / 2 - i - 1] = temp;
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    // else
    // {
    //     for (int i = 0; i < n / 2; i++)
    //     {
            
    //     }
    // }
    return 0;
}

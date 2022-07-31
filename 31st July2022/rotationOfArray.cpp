#include <iostream>
using namespace std;
int main()
{
    int temp, k, n;
    cout << "Enter no. of elements: ";
    cin >> n;
    int a[n];
    cout << "enter elements of array \n";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << "Enter how many times array should rotate: ";
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        temp = a[0];
        for (int j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
        for (int l = 0; l < n; l++)
        {
            cout << a[l] << " ";
        }
        cout << "\n";
    }
    return 0;
}
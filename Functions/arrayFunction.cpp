#include <iostream>
using namespace std;
int sum(int[], int);
int main()
{
    int  n, s;
    cout << "\nEnter a number: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    s = sum(a, n);
    cout << "sum of all elements of array = " << s;
    return 0;
}
int sum(int x[], int y)
{
    int t = 0;
    for (int i = 0; i < y; i++)
    {
        t = t + x[i];
    }
    return t;
}
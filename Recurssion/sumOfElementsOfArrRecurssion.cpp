#include <iostream>
using namespace std;
int sum(int[], int);
int main()
{
    int n;
    cout << "\n Enter number of elements of array : ";
    cin >> n;
    int a[n];
    cout << "\n Enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sum(a, n);
    return 0;
}
int sum(int b[], int x)
{
    int s, g=0;
    if (x >0)
    {
        s = b[x-1];
        g = s + sum(b, x-1);
    }
    return g;
}

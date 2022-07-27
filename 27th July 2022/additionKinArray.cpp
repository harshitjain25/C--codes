#include <iostream>
using namespace std;
int main()
{
    int n, k, i;
    cout<<"Enter no. of elements: ";
    cin >> n;
    int a[n + 1];
    cout << "enter elements of a \n";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << "enter the no. t be added";
    cin >> k;
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] > k)
        {
            a[i + 1] = a[i];
        }
        else
            break;
    }
    a[i + 1] = k;
}
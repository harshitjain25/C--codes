#include <iostream>
#include <climits>
using namespace std;
int largest(int[], int);
int main()
{
    int n;
    cout << "\n Enter size of array : ";
    cin >> n;
    int a[n];

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Largest element of array = " << largest(a, n);
    return 0;
}
int largest(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
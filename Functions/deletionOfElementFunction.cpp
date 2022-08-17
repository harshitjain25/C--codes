#include <iostream>
using namespace std;
void deletion(int[], int &, int);
int main()
{
    int n, x;
    cout << "\n Enter number of elements of array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter a number to be deleted: ";
    cin >> x;
    deletion(a, n, x);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
void deletion(int b[], int &m, int y)
{
    int c = 0;
    for (int i = 0; i < m; i++)
    {
        if (b[i] == y)
        {
            for (int j = i; j < m - 1; j++)
            {
                b[j] = b[j + 1];
            }
            m--;
            i--;
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << b[i] << " ";
    // }
}
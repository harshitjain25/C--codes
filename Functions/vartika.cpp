#include <iostream>
using namespace std;

int compare(int[], int[], int, int);

int main()
{
    int n, m, c;
    cout << "\n enter n : ";
    cin >> n;
    cout << "\n enter m : ";
    cin >> m;
    int a[n], b[m];

    cout << "enter the elements of a : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the elements of b : ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    c = compare(a, b, n, m);
    cout << c;
    return 0;
}
int compare(int a[], int b[], int n, int m)
{
    int count = 0;
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                count++;
            }
        }
        if (count == n)
        {
            return 1;
        }
        else

            return 0;
    }
    else
        return 0;
}
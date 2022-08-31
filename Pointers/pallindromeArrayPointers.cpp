#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;

    cout << "Enter size of an array: ";
    cin >> n;
    int *p;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (*(p + i) == *(p + n - i - 1))
        {
            count++;
        }
        else
            break;
    }
    if (count == n / 2)
    {
        cout << "palindrome";
    }
    else
        cout << "not palindrome";

    delete[] p;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    char a[30], b[30];
    int i = 0, j = 0, count = 0;
    cout << "\nEnter first string : ";
    cin.getline(a, 30);
    cout << "\nEnter second string : ";
    cin.getline(b, 30);

    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        j++;
    }
    if (i == j)
    {
        for (int k = 0; k < i; k++)
        {
            if (a[k] == b[k])
            {
                count++;
            }
        }
        if (count == i)
        {
            cout << "\nBoth Strings are same...";
        }
        else
            cout << "\nBoth Strings are not same...";
    }
    else
        cout << "\nBoth Strings are not same...";
    return 0;
}
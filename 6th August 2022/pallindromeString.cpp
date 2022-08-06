#include <iostream>
using namespace std;
int main()
{
    char a[30];
    int i = 0, count = 0;
    cout << "Enter a string : ";
    cin.getline(a, 30);

    while (a[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < i / 2; j++)
    {
        if (a[j] == a[i - j - 1])
        {
            count++;
        }
    }
    if (count == i / 2)
    {
        cout << "String entered is a pallindrome...";
    }
    else
        cout << "String entered is not a pallindrome...";
    return 0;
}
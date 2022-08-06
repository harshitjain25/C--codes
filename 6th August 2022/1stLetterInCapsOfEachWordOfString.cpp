#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[30];
    int i = 0;
    cout << "Enter a string : ";
    cin.getline(a, 30);
    i = strlen(a);
    // while (a[i] != '\0')
    // {
    //     i++;
    // }
    if (a[0] >= 97 && a[0] <= 122)
    {
        a[0] = a[0] - 32;
    }
    for (int j = 1; j < i; j++)
    {

        if (a[j] == 32)
        {
            if (a[j + 1] >= 97 && a[j + 1] <= 122)
            {
                a[j + 1] = a[j + 1] - 32;
            }
            j++;
        }
        else if (a[j] >= 65 && a[j] <= 90)
        {
            a[j] = a[j] + 32;
        }
    }
    cout << "New string: " << a;
    return 0;
}

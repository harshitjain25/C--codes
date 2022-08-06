#include <iostream>
using namespace std;
int main()
{
    char a[30];
    int i = 0;
    cout << "Enter a string : ";
    cin.getline(a, 30);

    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        i++;
    }
    cout << "\n string is: " << a<<"\n";
    return 0;
}
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
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            count++;
        }
        i++;
    }
    cout << "\nnumber of vowels in this string are: " << count;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    char a[30];
    int i = 0, temp;
    cout << "Enter a string : ";
    cin.getline(a, 30);

    while (a[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < i/2; j++)
    {
        temp = a[i - j - 1];
        a[i - j - 1] = a[j];
        a[j] = temp;
    }
    cout << "\nrevered string is: " << a;
    return 0;
}
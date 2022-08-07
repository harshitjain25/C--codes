#include <iostream>
using namespace std;
int main()
{
    char a[50];
    int j, k, temp, count = 0;
    cout << "\nEnter a string: ";
    cin.getline(a, 50);
    count = strlen(a);
    for (int i = 0; i <= count; i++)
    {
        j = i;
        while (j != count && a[j] != 32)
        {
            j++;
        }
        k = j;
        j--;
        while (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        i = k;
    }
    cout << "\nReversed sting is: " << a << "\n";
    cout << "\n";
    return 0;
}
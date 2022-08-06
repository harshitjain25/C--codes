#include <iostream>
using namespace std;
int main()
{
    char a[30];
    int i;
    cout << "Enter a string : ";
    cin.getline(a, 30);
    for (i = 0; i < 30; i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
    }
    cout << "\nlength of string = " << i;
    return 0;
}




// #include <iostream>
// using namespace std;
// int main()
// {

//     int i = 0;
//     char a[30];
//     cout << "enter the string";
//     cin.getline(a, 30);
//     while (a[i] != '\0')
//     {
//         i++;
//     }
//     cout << i;
//     return 0;
// }
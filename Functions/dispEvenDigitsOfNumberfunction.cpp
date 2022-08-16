#include <iostream>
using namespace std;
void dispeven(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
     dispeven(n);
    return 0;
}
void dispeven(int a)
{
    int i;
    while (a > 0)
    {
        i = a % 10;
        a = a / 10;

        if (i % 2 == 0)
        {
            cout <<"\n"<< i;
        }
    }
}

// #include <iostream>
// using namespace std;
// int dispeven(int);
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int j = 0; j <= n; j++)
//     {

//         cout << dispeven(n) << "\n";
//     }
//     return 0;
// }
// int dispeven(int a)
// {
//     int i;
//     while (a > 0)
//     {
//         i = a % 10;
//         a = a / 10;

//         if (i % 2 == 0)
//         {
//             return i;
//         }
//     }
// }
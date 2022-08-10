#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int count = 0, j = 0;

    char a[30], w[30];
    cout << "enter the string :";
    cin.getline(a, 30);
    int c = strlen(a);
    cout << "enter the word to be searched :";
    cin.getline(w, 30);
    int d = strlen(w);

    for (int i = 0; i < c; i++)
    {

        for (j = 0; j < d; j++)
        {
            if (a[i + j] != w[j])
            {
                break;
            }
        }
        
    }
    if (j == d)
        {
            cout << "substring found";
        }
        else
            cout << "substring not found";
    return 0;
}
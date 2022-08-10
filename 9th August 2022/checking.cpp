#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[30], b[30];
    cout << "enter the string :";
    cin.getline(a, 30);
    cin.getline(b, 30);
    int l = strcmp(a, b);
    int s = strncmp(a, b, 2);
    //strcpy(a,b);
    // strcat(a," ");
    // strcat(a,b);
    //strrev(a);
    //strlwr(a);
    strupr(a);
    cout << l << " " << s << "\n"<<a;
    return 0;
     
}
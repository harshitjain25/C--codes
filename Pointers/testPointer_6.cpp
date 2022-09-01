#include <iostream>
using namespace std;
int main()
{
    int b,a = 10;
    int *p = &a;
    b= *p++;
    // (*p)++;
    // ++*p;
    // *++p;
    cout <<b<<" "<< *p << " " << a;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a;
    char *p;
    a=1145258306;
    p=(char*)&a;
    cout<<"  "<<*p;
    p++;
    cout<<"  "<<*p;
    p++;
    cout<<"  "<<*p;
    p++;
    cout<<"  "<<*p;
    cout<<" "<<a;
    return 0;
}
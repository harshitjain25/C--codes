#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **p1;
    p1 = &p;
    cout<<*p<<"\n";
    cout<<p1<<"\n";
    // int *a[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << "\n";
    // }
     return 0;
}
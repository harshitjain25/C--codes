#include <iostream>
using namespace std;
int main()
{

    int *a[5];
    int m = 10, n = 80;
    a[0] = &m;
    a[1] = &n;
    cout << a[0] << "\n";
    cout << a[1] << "\n";
    cout << *a[0] << "\n";
    cout << *a[1] << "\n";
    return 0;
}
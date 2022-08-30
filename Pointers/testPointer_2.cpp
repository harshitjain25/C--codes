#include <iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    cout << "Enter a number: ";
    cin >> a;
    p = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < a; i++)
    {
        cout << *(p + i)<<" ";
    }
    delete[]p;
    return 0;
}
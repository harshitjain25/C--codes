#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p + i << " ";
        cout << *(p + i) << " ";
    }
    cout << "\n";

    int *q;
    q = new int[9];
    for (int i = 0; i < 5; i++)
    {
        *(q + i) = *(p + i);
    }
    for (int i = 5; i < 9; i++)
    {
        cin >> *(q + i);
    }
    // delete[] p;
    p = q;
    for (int i = 0; i < 9; i++)
    {
        cout << q + i << " ";
        cout << *(q + i) << " ";
    }
    cout << "\n";
    for (int i = 0; i < 9; i++)
    {
        cout << p + i << " ";
        cout << *(p + i) << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int a[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(*(a + i) + j);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(a + i) + j) << " ";
        }
    }
    cout << "\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(a + i) + j << "\n";
        }
    }
    return 0;
}
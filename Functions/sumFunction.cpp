#include <iostream>
using namespace std;
int sum(int, int);
int main()
{
    int x, y, s = 0;
    cout << "\nEnter x and y: ";
    cin >> x >> y;
    s = sum(x, y);
    cout << "sum = " << s;
    return 0;
}
int sum(int a, int b)
{
    int k = 0;
    for (int i = a; i <= b; i++)
    {
        k = k + i;
    }
    return k;
}
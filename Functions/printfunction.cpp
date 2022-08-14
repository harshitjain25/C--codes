#include <iostream>
using namespace std;
void sum(int);
int main()
{
    int x;
    cout << "\nEnter a number: ";
    cin >> x;
    sum(x);
    return 0;
}
void sum(int a)
{
    int i;
    for (int i = 1; i <= a; i++)
    {
        cout << "*";
    }
}
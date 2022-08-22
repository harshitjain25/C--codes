#include <iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int n;
    cout << "\n Enter number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}
int fibonacci(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else 
    {
        return fibonacci(x-2)+fibonacci(x-1);
    }
}
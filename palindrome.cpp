#include <iostream>
using namespace std;
int main()
{
    int m, n, x, rev=0;
    
    cout << "enter a number";
    cin >> n;
    m=n;
    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        rev=rev*10+x;
    }
    if(rev==m)
    cout<<"palindrome";
    else
    cout<<"not a palindrome";
}
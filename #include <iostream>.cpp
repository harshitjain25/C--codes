#include <iostream>
using namespace std;
int main()
{
    int a, i, j,k;
    cout << "Enter a 2 digit no.";
    cin >> a;

    i = a / 10;
    j = a % 10;
    k=(a%100)%10;

    cout << "\none's digit is:" << i;
    cout << "\nten's digit is:" << j;
    cout << "\nten's digit is:" << k;
    return 0;
}

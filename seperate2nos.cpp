#include <iostream>
using namespace std;
int main()
{
    int a, i, j;
    cout << "Enter a 2 digit no.";
    cin >> a;

    i = a / 10;
    j = a % 10;

    cout << "\none's digit is:" << i;
    cout << "\nten's digit is:" << j;
    return 0;
}

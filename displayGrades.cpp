#include <iostream>
using namespace std;
int main()
{

    int m;
    cout << "Enter marks of the Subjects: ";
    cin >> m;
    if (m > 100 || m < 0)
        cout << "Invalid Marks";
    else if (m >= 75)
        cout << "A grade";
    else if (m >= 50)
        cout << "B grade";
    else if (m >= 33)
        cout << "C grade";
    else
        cout << "F grade(FAIL)";
    return 0;
}
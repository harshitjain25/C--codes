#include <iostream>
using namespace std;
class student
{
    char a[30];
    int roll, m, avg;

public:
    void indata()
    {
        cout << "\nEnter Name: ";
        cin.getline(a, 30);
        cout << "\nEnter Total Marks of 5 Subjects: ";
        cin >> m;
        cout << "\nEnter roll number: ";
        cin >> roll;
    }
    void calc()
    {
        avg = m/5;
    }
    void outdata()
    {
        cout << a << "\n";
        cout << roll << "\n";
        cout << m << "\n";
        cout << avg << "\n";
    }
};
int main()
{
    student a1;
    a1.indata();
    a1.calc();
    a1.outdata();
    return 0;
}
#include <iostream>
using namespace std;
struct marks
{
    int subcode;
    int maxm;
    int minm;
    char grade;
};
struct student
{
    int rno;
    char n[30];
    marks m[5];
};
int main()
{
    int n;
    cout << "Enter number of Students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Roll no.: ";
        cin >> s[i].rno;
        cout << "Enter Name: ";
        cin >> s[i].n;
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter Subject Code: ";
            cin >> s[i].m[j].subcode;
            cout << "Enter Maximum Marks: ";
            cin >> s[i].m[j].maxm;
            cout << "Enter Marks Obtained: ";
            cin >> s[i].m[j].minm;
            cout << "Enter Grade: ";
            cin >> s[i].m[j].grade;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].rno << "\n";

        cout << s[i].n << "\n";

        for (int j = 0; j < 5; j++)
        {
            cout << s[i].m[j].subcode << "\n";

            cout << s[i].m[j].maxm << "\n";

            cout << s[i].m[j].minm << "\n";

            cout << s[i].m[j].grade << "\n";
        }
    }
}
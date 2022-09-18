#include <iostream>
using namespace std;
struct marks
{
    int subcode;
    int maxm;
    int minm;
    char Grade;
};
struct student
{
    int rno;
    char n[30];
    marks m[5];
};
char grade(int x, int y)
{
    x = x  * 100/y;
    if (x >= 80 && x <= 100)
    {
        return 'A';
    }
    else if (x >= 60 && x <= 79)
    {
        return 'B';
    }
    else if (x >= 40 && x <=59)
    {
        return 'C';
    }
    else if (x < 40)
    {
        return 'F';
    }
}
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
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter Subject Code: ";
            cin >> s[i].m[j].subcode;
            cout << "Enter Maximum Marks: ";
            cin >> s[i].m[j].maxm;
            cout << "Enter Marks Obtained: ";
            cin >> s[i].m[j].minm;
            s[i].m[j].Grade = grade(s[i].m[j].minm, s[i].m[j].maxm);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].rno << "\n";

        cout << s[i].n << "\n";

        for (int j = 0; j < 3; j++)
        {
            cout << s[i].m[j].subcode << "\n";

            cout << s[i].m[j].maxm << "\n";

            cout << s[i].m[j].minm << "\n";

            cout << s[i].m[j].Grade << "\n";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
struct complex
{
    float a;
    float b;
};
int main()
{
    complex p, q;
    cout << "Enter complex number: ";
    cin >> p.a >> p.b;
    cout << p.a << "+" << p.b << "i"
         << "\n";
    cout << "Enter another complex number: ";
    cin >> q.a >> q.b;
    cout << q.a << "+" << q.b << "i"
         << "\n";
    int ans1, ans2;
    ans1 = p.a * q.a - p.b * q.b;
    ans2 = p.a * q.b + p.b * q.a;
    cout << "\n";
    cout << ans1 << "+" << ans2 << "i";
    return 0;
}
#include <iostream>
using namespace std;
struct rational
{
    int num;
    int denom;
};
int hcf(int a, int b)
{
    int min = (a < b) ? a : b;
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b% i == 0)
        {
            return i;
        }
    }
}
rational add(rational p, rational q)
{
    rational a;
    a.num = p.num * q.denom + q.num * p.denom;
    a.denom = p.denom * q.denom;
    ;
    return a;
}
int check(rational p, rational q)
{
    int j, k;
    j = hcf(p.num, p.denom);
    p.num = p.num / j;
    p.denom = p.denom / j;
    k = hcf(q.num, q.denom);
    q.num = q.num / k;
    q.denom = q.denom / k;
    if (p.num == q.num && p.denom == q.denom)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    rational ans, r1, r2;
    cout << "enter: ";
    cin >> r1.num >> r1.denom;
    cout << "enter: ";
    cin >> r2.num >> r2.denom;
    ans = add(r1, r2);
    int k = hcf(ans.num, ans.denom);
    ans.num = ans.num / k;
    ans.denom = ans.denom / k;
    cout << "Addition is: " << ans.num << "/" << ans.denom << "\n";
    cout << check(r1, r2);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// code to add 2 complex no c1 and c2
// c = a + bi
typedef struct Complex
{
    double a; // real part
    double b; // imaginary part
} com;
com add(com x, com y)
{
    com ans;
    ans.a = x.a + y.a;
    ans.b = x.b + y.b;
    return ans;
}
// x * y = ans ;
// (p +qi) * (c +di) = pc -qd + (qc +pd)i     -> hint :)
// (p + qi) * (c + di) = pc + (pd)i + (qc)i + (qd)i ^ 2, i ^ 2 = -1;
com product(com x, com y)
{
    // x = p + qi  p = x.a , q = x.b
    // y = c + di   c = y.a d =y.b
    // ans = pc -qd + (qc +pd)i
    com ans; // ans.a  = real part of ans
    ans.a = (x.a * y.a) - (x.b * y.b);
    ans.b = x.b * y.a + x.a * y.b;
    return ans;
}
int main()
{
    com g, h;
    g.a = 1;
    g.b = 2;
    // g = 1 + 2i
    h.a = 8;
    h.b = 10;
    // h = 8 +10i
    com k;
    k = add(g, h); // k = 9 + 12i
    printf("%lf + %lf i\n", k.a, k.b);

    com j = product(g, h);

    printf("%lf + %lf i", j.a, j.b);
}
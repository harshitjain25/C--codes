#include <iostream>
#include <math.h>
using namespace std;
struct point
{
    float xcor;
    float ycor;
};
float distance(point a, point b)
{
    return pow((pow(a.xcor - b.xcor, 2) - pow(a.ycor - b.ycor, 2)), 1 / 2);
}
int main()
{
    float ans;
    point a, b;
    cout << "Enter coordinates of point A: ";
    cin >> a.xcor >> a.ycor;
    cout << "Enter coordinates of point B: ";
    cin >> b.xcor >> b.ycor;
    ans = distance(a, b);
    cout << "\n";
    cout << ans;
    return 0;
}
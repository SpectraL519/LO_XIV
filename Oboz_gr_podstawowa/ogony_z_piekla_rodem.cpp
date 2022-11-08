#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c; // x+z=a    y+z=b   x+y=c
    x=(a+c-b)/2;
    y=(b+c-a)/2;
    z=(b+a-c)/2;
    cout << x << " " << y << " " << z;
    return 0;
}
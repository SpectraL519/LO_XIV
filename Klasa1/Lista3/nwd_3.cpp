#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int NWD (int a, int b)
{
    int t;
    while (b > 0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int nwd1;
    nwd1 = NWD(a,b);
    int nwd2;
    nwd2 = NWD(nwd1,c);
    cout << nwd2;
    return 0;
}
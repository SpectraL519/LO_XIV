#include <bits/stdc++.h>
using namespace std;

int d, g, f, e, h, i, nwd1, nwd2, a, b, c;

int NWD (int x, int y)
{
    int t;
    while (y > 0)
    {
        t = y;
        y = x%y;
        x = t;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> d >> e >> f >> g >> h >> i;
    a = abs(d - g);
    b = abs(e - h);
    c = abs(f - i);
    nwd1 = NWD(a,b);
    nwd2 = NWD(nwd1,c);
    cout << nwd2 + 1;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

double p, q, a, b, x, y, w, P = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> w;
    cin >> p >> q;
    a = p;
    b = q;
    for (int i = 1; i < w; i++){
        cin >> x >> y;
        P += ((a*y)-(b*x));
        a = x;
        b = y;
    }
    P += ((a*q)-(b*p));
    cout << fixed << setprecision(8) << fabs(P/2);
    return 0;
}
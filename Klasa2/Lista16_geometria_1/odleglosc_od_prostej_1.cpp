#include <bits/stdc++.h>
using namespace std;

float a, b, c, n, x, y, d;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> a >> b >> c >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        d = (fabs(a*x + b*y + c))/(sqrt(a*a + b*b));
        cout << fixed << setprecision(2) << d << "\n";
    }
    return 0;
}
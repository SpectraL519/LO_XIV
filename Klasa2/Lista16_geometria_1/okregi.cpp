#include <bits/stdc++.h>
using namespace std;

int a, d, b, e, r1, r2, t, r, R;
float l, x, y;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b >> r1 >> d >> e >> r2;
        r = abs(r1-r2);
        R = r1+r2;
        if (a == d || b == e){
            l = fabs(((float)a-(float)d)-((float)b-(float)e));
        }
        else{
            x = (((float)d-(float)a) * ((float)d-(float)a));
            y = (((float)e-(float)b) * ((float)e-(float)b));
            l = fabs(sqrt(x + y));
        }
        if (l > R || (l >= 0 && l < r) || (l == 0 && r != 0))  cout << 0 << "\n";
        else if (l == R || (l == r && r != 0))    cout << 1 << "\n";
        else if ((r < l) && (l < R))     cout << "2" << "\n";
        else if (l == 0 && r == 0)  cout << -1 << "\n";
    }
    return 0;
}
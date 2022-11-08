#include <bits/stdc++.h>
using namespace std;

int t, a, c, b, d, x, y, det, p = 0, l = 0, n = 0;
pair <int,int> V1, V2;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    cin >> a >> b >> c >> d;
    V1 = make_pair(c-a,d-b);
    for (int i = 0; i < t; i++){
        cin >> x >> y;
        V2 = make_pair(x-a,y-b);
        det = ((V1.first*V2.second) - (V1.second*V2.first));
        if (det > 0) l++;
        else if (det < 0)   p++;
        else    n++;
    }
    cout << "na prostej " << n << "\nna prawo " << p << "\nna lewo " << l;
    return 0;
}
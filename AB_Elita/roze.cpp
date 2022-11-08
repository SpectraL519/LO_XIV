#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, c, x, y, z;
    cin >> n;
    cin >> a >> b >> c;
    for (int i = 1; i < n; i++){
        cin >> x >> y >> z;
        x += min (b,c);
        y += min (a,c);
        z += min (a,b);
        a = x;
        b = y;
        c = z;
    }
    cout << min (min(a,b),c);
    return 0;
}
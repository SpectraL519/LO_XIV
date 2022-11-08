#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float a, b, c, d, e, f, p;
pair <float,float> V1, V2;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> a >> b >> c >> d >> e >> f;
    V1 = make_pair(c-a,d-b);
    V2 = make_pair(e-a,f-b);
    p = fabs(((V1.first * V2.second) - (V1.second * V2.first)) / 2);
    cout << fixed << setprecision(1) << p;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t, k, n, h, nn;
    cin >> t;
    for (t; t > 0; t--)
    {
        h = 0;
        nn = 1;
        cin >> n >> k;
            while (nn < k && nn < n)
            {
                nn = nn * 2;
                h++;
            }
            while (nn >= k && nn < n)
            {
                nn += k;
                h++;
            }
        cout << h << "\n";
    }
}
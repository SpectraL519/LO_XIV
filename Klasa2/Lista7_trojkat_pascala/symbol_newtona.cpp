#include <bits/stdc++.h>
using namespace std;

int t, N, ans;

int Newton (int a)
{
    int p = 0;
    for (int i = 2; i <= a; i *= 2){
        p += (a/i);
    }
    return p;
}

int main()
{
    //ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        ans = 0;
        cin >> N;
        for (int n = 0; n <= N; n++){
            for (int k = 0; k <= n; k++){
                if ((Newton(n)-Newton(k)-Newton(n-k)) == 0)      ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long k, roz, br, s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> k;
    if (k == 1){
        roz = 1;
        br = 0;
    }
    else{
        roz = 2;
        while (roz < k) roz *= 2;
        if (roz == k){
            br = 0;
        }
        else{
            s = roz;
            while (k > 1){
                s /= 2;
                if (s <= k) k -= s;
                br++;
            }
            if (k == 1){
                while (s > 1){
                    s /= 2;
                    br++;
                }
            }
        }
    }
    cout << roz << " " << br;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int t, k, z, n;
bool p;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> k >> z;
        p = true;
        for (int j = 1; j <= k; j++){
            cin >> n;
            if (z < j - n){
                p = false;
            }
        }
        if (p)  cout << "TAK\n";
        else    cout << "NIE\n";
    }
    return 0;
}
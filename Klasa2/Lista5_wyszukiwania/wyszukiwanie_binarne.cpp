#include <bits/stdc++.h>
using namespace std;

int tab[1000001];

int n, m, p, k, s, x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> x;
        p = 0;
        k = n;
        while (p != k){
            s = (p + k) / 2;
            if (tab[s] >= x){
                k = s;
            }
            else{
                p = s + 1;
            }
        }
        cout << n - p << " ";
    }
    return 0;
}
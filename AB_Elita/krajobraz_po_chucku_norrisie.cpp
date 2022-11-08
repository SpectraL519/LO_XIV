#include <bits/stdc++.h>
using namespace std;

int tab[1000001];
int n, a, b, c, ans = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> a >> b >> c;
    cin >> tab[0];
    for (int i = 1; i < n; i++){
        cin >> tab[i];
        tab[i] += 10;
        if (tab[i] == 11)   continue;
        if (i-a >= 0 && tab[i-a] < 10){
            tab[i] = min(tab[i],tab[i-a]);
        }
        if (i-b >= 0 && tab[i-b] <10){
            tab[i] = min(tab[i],tab[i-b]);
        }
        if (i-c >= 0 && tab[i-c] == 0){
            tab[i] = min(tab[i],1);
        }
    }
    for (int i = 1; i < n; i++){
        if (tab[i] < 10)    ans = i;
    }
    cout << ans+1;
    return 0;
}
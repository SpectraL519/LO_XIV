#include <bits/stdc++.h>
using namespace std;

int dp[20002]; /// tablica kwot
int nom[202]; /// tablica nominałów
int quant[202]; /// tablica liczebności banknotów o nominale nom[i]
int n, k; /// n-liczba nominałów, k-kwota
int INF = 2000000000; /// niskończoność

void zero()
{
    for (int i = 1; i <= k; i++) dp[i] = INF;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> nom[i];
    }
    for (int i = 0; i < n; i++){
        cin >> quant[i];
    }
    cin >> k;
    zero();
    for (int i = 0; i < n; i++){
        for (int j = k-1; j >= 0; j--){
            if (dp[j] == INF)   continue;
            for (int x = 1; x <= quant[i]; x++){
                if (j + x*nom[i] <= k){
                    if (dp[j+x*nom[i]] <= dp[j]+x)    break;
                    else    dp[j+x*nom[i]] = dp[j]+x;
                }
                else    break;
            }
        }
    }
    if (dp[k] == INF)   cout << -1;
    else    cout << dp[k];
    return 0;
}
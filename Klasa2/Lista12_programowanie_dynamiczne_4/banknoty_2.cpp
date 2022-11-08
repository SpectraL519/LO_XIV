#include <bits/stdc++.h>
using namespace std;

int dp[20002]; /// tablica kwot
int nom[202]; /// tablica nominałów
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
    cin >> k;
    zero();
    for (int i = 0; i < n; i++){
        for (int j = nom[i]; j <= k; j+=nom[i]){
            dp[j] = min(dp[j-nom[i]]+1,dp[j]);
        }
    }
    if (dp[k] == INF)   cout << -1;
    else    cout << dp[k];
    return 0;
}
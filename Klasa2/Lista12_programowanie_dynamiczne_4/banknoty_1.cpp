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
        for (int j = k-1; j >= 0; j--){
            if (dp[j] < INF && j+nom[i] <= k){
                dp[j+nom[i]] = min(dp[j]+1,dp[j+nom[i]]);
            }
        }
    }
    if (dp[k] == INF)   cout << -1;
    else    cout << dp[k];
    return 0;
}
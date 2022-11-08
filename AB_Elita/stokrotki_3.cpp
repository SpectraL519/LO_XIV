#include <bits/stdc++.h>
using namespace std;

int tab[1010][1010];
int dp[1010][1010];
int t, a, b;

void zero()
{
    for (int i = 0; i <= 1000; i++){
        tab[0][i] = 2000000000;
        tab[a+1][i] = 2000000000;
        dp[0][i] = 2000000000;
        dp[a+1][i] = 2000000000;
    }
}

int koszt ()
{
    for (int j = 1; j <= b; j++){
        if (j > 1){
            for (int i = 1; i <= a; i++){
                dp[i][j] += min(dp[i-1][j-1],min(dp[i][j-1],dp[i+1][j-1]));
            }
        }
        for (int i = 2; i <= a; i++){
            if (dp[i][j] > dp[i-1][j] + tab[i][j]){
                dp[i][j] = dp[i-1][j] + tab[i][j];
            }
        }
        for (int i = a-1; i > 0; i--){
            if (dp[i][j] > dp[i+1][j] + tab[i][j]){
                dp[i][j] = dp[i+1][j] + tab[i][j];
            }
        }
    }
    int mini = dp[1][b];
    for (int i = 2; i <= a; i++){
        mini = min(mini,dp[i][b]);
    }
    return mini;
}

int main()
{
    ios_base::sync_with_stdio(0);
        cin >> a >> b;
        zero();
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= b; j++){
                cin >> tab[i][j];
                dp[i][j] = tab[i][j];
            }
        }
        cout << koszt();
    return 0;
}
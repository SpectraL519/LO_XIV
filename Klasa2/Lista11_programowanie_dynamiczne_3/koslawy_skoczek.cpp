#include <bits/stdc++.h>
using namespace std;

int tab[1010][1010];
int dp[1010][1010];
int a, b;

void brzegi()
{
    for (int i = 0; i <= a; i++){
        dp[i][0] = -1;
        dp[i][b+1] = -1;
    }
    for (int i = 1; i <= b; i++){
        dp[0][i] = -1;
    }
}

int niezapominajki()
{
    for (int i = 3; i <= a; i++){
        for (int j = 1; j <= b; j++){
            dp[i][j] += max(dp[i-2][j-1],dp[i-2][j+1]);
        }
        i--;
        for (int j = 1; j <= b; j++){
            if (dp[i][j] < dp[i+1][j-1] + tab[i][j]){
                dp[i][j] = dp[i+1][j-1] + tab[i][j];
            }
            if (dp[i][j] < dp[i+1][j+1] + tab[i][j]){
                dp[i][j] = dp[i+1][j+1] + tab[i][j];
            }
        }
        i++;
    }
    int maxi = dp[a][1];
    for (int j = 2; j <= b; j++){
        maxi = max(maxi,dp[a][j]);
    }
    return maxi;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> a >> b;
    brzegi();
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            cin >> tab[i][j];
            dp[i][j] = tab[i][j];
        }
    }
    cout << niezapominajki();
    return 0;
}
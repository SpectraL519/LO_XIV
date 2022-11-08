#include <bits/stdc++.h>
using namespace std;

int tab[3002][3002];
int dp[3002][3002];
int M = 1000000000;
string a, b;

int lcs()
{
    cin >> a >> b;
    a = '0' + a;
    b = '0' + b;
    for (int i = 1; i < a.size(); i++){
        for (int j = 1; j < b.size(); j++){
            if (a[i] == b[j])   tab[i][j] = tab[i-1][j-1] + 1;
            else    tab[i][j] = max(tab[i-1][j],tab[i][j-1]);
        }
    }
    for (int i = 0; i < a.size(); i++)  dp[i][0] = 1;
    for (int j = 0; j < b.size(); j++)  dp[0][j]= 1;
    for (int i = 1; i < a.size(); i++){
        for (int j = 1; j < b.size(); j++){
            if (a[i] == b[j])   dp[i][j] = dp[i-1][j-1];
            if (tab[i][j] == tab[i-1][j]){
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= M;
            }
            if (tab[i][j] == tab[i][j-1]){
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= M;
            }
            if (tab[i][j] == tab[i-1][j-1]){
                dp[i][j] -= dp[i-1][j-1];
                if (dp[i][j] < 0)   dp[i][j] += M;
                dp[i][j] %= M;
            }
        }
    }
    /*for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < b.size(); j++){
            cout << tab[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < b.size(); j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }*/
    cout << "\n";
    return dp[a.size()-1][b.size()-1];
}

int main()
{
    cout << lcs();
    return 0;
}
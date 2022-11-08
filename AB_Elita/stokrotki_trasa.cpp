#include <bits/stdc++.h>
using namespace std;

int tab[1010][1010];
int ind[1010][1010];
int ans[1001];
int a, b;

void zero()
{
    for (int i = 0; i <= b; i++){
        tab[0][i] = 2000000000;
        tab[a+1][i] = 2000000000;
    }
}

void koszt ()
{
    for (int j = 2; j <= b; j++){
        for (int i = 1; i <= a; i++){
            tab[i][j] += min(tab[i-1][j-1],min(tab[i][j-1],tab[i+1][j-1]));
        }
    }
    int mini = 2000000000, indm; /// indm - indeks mini
    for (int i = 1; i <= a; i++){
        if (tab[i][b] <= mini){
            mini = tab[i][b];
            indm = i;
        }
    }
    ans[b] = indm;
    int v;
    for (int i = b-1; i > 0; i--){
        v = min(tab[indm-1][i],min(tab[indm][i],tab[indm+1][i]));
        if (v == tab[indm-1][i]){
            ans[i] = indm - 1;
            indm--;
            continue;
        }
        if (v == tab[indm][i]){
            ans[i] = indm;
            continue;
        }
        if (v == tab[indm+1][i]){
            ans[i] = indm + 1;
            indm++;
            continue;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
        cin >> a >> b;
        zero();
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= b; j++){
                cin >> tab[i][j];
            }
        }
        koszt();
        for (int i = 1; i <= b; i++)     cout << ans[i]-1 << " ";
    return 0;
}
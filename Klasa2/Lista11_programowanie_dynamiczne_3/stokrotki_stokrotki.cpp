#include <bits/stdc++.h>
using namespace std;

int tab[1010][1010];
int t, a, b;

void brzegi()
{
    for (int i = 0; i < 1001; i++){
        tab[i][0] = 0;
        tab[0][i] = 0;
    }
}

void zero()
{
    for (int i = 1; i < 1001; i++){
        for (int j = 1; j < 1001; j++){
            tab[i][j] = 0;
        }
    }
}

int stokrotki (int x, int y)
{
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= y; j++){
            cin >> tab[i][j];
            tab[i][j] += max(tab[i-1][j],tab[i][j-1]);
        }
    }
    return tab[x][y];
}

int main()
{
    ios_base::sync_with_stdio(0);
    brzegi();
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        cout << stokrotki(a,b) << "\n";
        zero();
    }
    return 0;
}
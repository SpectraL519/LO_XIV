#include <bits/stdc++.h>
using namespace std;

int tab[16][16];

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    tab[0][0] = 1;
    for (int i = 1; i < n; i++){
        tab[i][0] = 1;
        for (int j = 1; j <= i; j++){
            tab[i][j] = tab[i-1][j] + tab[i-1][j-1];
        }
    }
    /*for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            cout << tab[i][j] << " ";
        }
        cout << "\n";
    }*/
    for (int i = 0; i < n; i++){
        cout << tab[n-1][i] << " ";
    }
    return 0;
}
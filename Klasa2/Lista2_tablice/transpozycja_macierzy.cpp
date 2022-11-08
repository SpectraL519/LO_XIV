#include <bits/stdc++.h>
using namespace std;

int tab [101][101];
int n, m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> tab[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << tab[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
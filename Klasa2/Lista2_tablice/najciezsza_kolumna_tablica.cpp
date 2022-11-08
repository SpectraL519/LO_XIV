#include <bits/stdc++.h>
using namespace std;

int tab [1001][1001];
int n, m = 0, s, k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> tab[i][j];
        }
    }
    for (int j = 0; j < n; j++){
        s = 0;
        for (int i = 0; i < n; i++){
            s += tab[i][j];
        }
        if (s > m){
            m = s;
            k = j;
        }
    }
    cout << k;
    return 0;
}
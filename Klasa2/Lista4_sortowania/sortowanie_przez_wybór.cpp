#include <bits/stdc++.h>
using namespace std;

int tab[100001];

int t, m, n, x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> tab[i];
    }
    for (int i = t - 1; i >= 0; i--){
        m = tab[0];
        n = 0;
        for (int j = 1; j <= i; j++){
            if (m < tab[j]){
                m = tab[j];
                n = j;
            }
        }
        x = tab[n];
        tab[n] = tab[i];
        tab[i] = x;
    }
    for (int i = 0; i < t; i++){
        cout << tab[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int tab[1000001];
int n, k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    cin >> k;
    k %= n;
    if (k >= 0){
        for (int i = k; i < n; i++){
            cout << tab[i] << " ";
        }
        for (int i = 0; i < k; i++){
            cout << tab[i] << " ";
        }
    }
    else{
        for (int i = n+k; i < n; i++){
            cout << tab[i] << " ";
        }
        for (int i = 0; i < n+k; i++){
            cout << tab[i] << " ";
        }
    }
    return 0;
}
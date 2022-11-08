#include <bits/stdc++.h>
using namespace std;

long long tab[500001];

int t, n, l;
long long k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> tab[j];
        }
        k = tab[0];
        l = 1;
        for (int j = 1; j < n; j++){
            if (tab[j] == k)    l++;
            else{
                if (l > 0)  l--;
                else{
                    k = tab[j+1];
                    l = 1;
                    j++;
                }
            }
        }
        l = 0;
        for (int j = 0; j < n; j++){
            if (tab[j] == k)    l++;
        }
        if (l > n/2)    cout << k << "\n";
        else    cout << -1 << "\n";
    }
    return 0;
}
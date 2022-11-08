#include <bits/stdc++.h>
using namespace std;

int tab [100001];
int n, m, ma;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    m = tab[0];
    ma = m;
    for (int i = 0; i < n; i++){
        if (tab[i] < m){
            m = tab[i];
        }
        cout << m << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++){
        if (tab[i] > ma){
            ma = tab[i];
        }
        cout << ma << " ";
    }
    return 0;
}
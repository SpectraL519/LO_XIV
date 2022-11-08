#include <bits/stdc++.h>
using namespace std;

long long tab[500001];
long long n, k;

long long minimum(int i)
{
    long long m = tab[i-1];
    for (int j = 2; j <= k; j++){
        m = min(m,tab[i-j]);
    }
    return m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    for (int i = k; i <= n; i++){
        tab[i] += minimum(i);
    }
    cout << tab[n];
    return 0;
}
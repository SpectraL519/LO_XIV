#include <bits/stdc++.h>
using namespace std;

int tab[50001];
int n, s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
        s += tab[i];
    }
    for (int i = 0; i < n; i++){
        cout << s << "\n";
        s -= tab[i];
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long tab[51][51];

int n;

int main()
{
    //ios_base::sync_with_stdio(0);
    cin >> n;
    tab[0][0] = 1;
    for (int i = 1; i <= n; i++){
        tab[i][0] = 1;
        for (int j = 1; j <= i; j++){
            tab[i][j] = tab[i-1][j] + tab[i-1][j-1];
        }
    }
    if (n == 0){
        cout << 1;
    }
    else{
        for (int i = 0; i <= n; i++){
            if (i == 0)     cout << "a^" << n << "+";
            else if (i == n)    cout << "b^" << n;
            else    cout << tab[n][i] << "a^" << n-i << "b^" << i << "+";
        }
    }
    return 0;
}
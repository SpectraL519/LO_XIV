#include <bits/stdc++.h>
using namespace std;

int tab[102][102];

int lcs()
{
    string a, b;
    cin >> a >> b;
    a = '0' + a;
    b = '0' + b;
    int x = a.size(), y = b.size();
    for (int i = 1; i < x; i++){
        for (int j = 1; j < y; j++){
            if (a[i] == b[j]){
                tab[i][j] = tab[i-1][j-1] + 1;
            }
            else{
                tab[i][j] = max(tab[i-1][j],tab[i][j-1]);
            }
        }
    }
    return tab[x-1][y-1];
}

int main()
{
    cout << lcs();
    return 0;
}
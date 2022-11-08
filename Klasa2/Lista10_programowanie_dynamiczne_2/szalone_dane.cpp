#include <bits/stdc++.h>
using namespace std;

int tab[102][102][102];
int t;
string a, b, c;

void zero()
{
    for (int i = 1; i < a.size(); i++){
        for (int j = 1; j < b.size(); j++){
            for (int k = 1; k < c.size(); k++){
                tab[i][j][k] = 0;
            }
        }
    }
}

int lcs()
{
    cin >> a >> b >> c;
    a = '0' + a;
    b = '0' + b;
    c = '0' + c;
    for (int i = 1; i < a.size(); i++){
        for (int j = 1; j < b.size(); j++){
            for (int k = 1; k < c.size(); k++){
                if (a[i] == b[j] && a[i] == c[k]){
                    tab[i][j][k] = tab[i-1][j-1][k-1] + 1;
                }
                else{
                    tab[i][j][k] = max(tab[i-1][j][k],max(tab[i][j-1][k],tab[i][j][k-1]));
                }
            }
        }
    }
    return tab[a.size()-1][b.size()-1][c.size()-1];;
}

int main()
{
   cin >> t;
   for (int i = 0; i < t; i++){
        cout << lcs() << "\n";
        zero();
   }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool tab[105][105];
int t, n; /// liczba testow, wymiar tablicy kwadratowej
char z;
bool ans;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        ans = true;
        cin >> n;
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                cin >> z;
                if (z == '#')   tab[j][k] = 1;
                else    tab[j][k] = 0;
            }
        }
        for (int j = 1; j < n-1; j++){
            for (int k = 1; k < n-1; k++){
                if (tab[j][k] && tab[j-1][k] && tab[j][k-1] && tab[j][k+1] && tab[j+1][k]){
                    tab[j][k] = 0;
                    tab[j-1][k] = 0;
                    tab[j][k-1] = 0;
                    tab[j][k+1] = 0;
                    tab[j+1][k] = 0;
                }
            }
        }
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                if (tab[j][k]){
                    ans = 0;
                    break;
                }
            }
            if (!ans)   break;
        }
        if (ans)    cout << "TAK\n";
        else    cout << "NIE\n";
    }
    return 0;
}
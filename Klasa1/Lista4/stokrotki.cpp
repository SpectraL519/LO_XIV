#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int tab[1010][1010];

void brzegi()
{
    for (int i = 0; i < 1001; i++){
        tab[i][0] = 0;
    }
    for (int i = 0; i < 1001; i++){
        tab[0][i] = 0;
    }
}

void zero()
{
    for (int i = 1; i < 1001; i++){
        for (int j = 1; j < 1001; j++){
            tab[i][j] = 0;
        }
    }
}

int stokrotki (int x, int y)
{
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= y; j++){
            cin >> tab[i][j];
        }
    }
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= y; j++){
            tab[i][j] += max(tab[i-1][j],tab[i][j-1]);
        }
    }
    int suma = tab[x][y];
    return suma;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    brzegi();
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x >> y;
        cout << stokrotki(x,y) << "\n";
        zero();
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

long long int tab[1010][1010];

void zero()
{
    for (int i = 0; i <= 1000; i++){
        for (int j = 0; j <= 1000; j++){
            tab[i][j] = 2000000000;
        }
    }
}

void wczytywanie (int x, int y)
{
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= y; j++){
            cin >> tab[i][j];
        }
    }
}

void wypisanie_tablicy (int k, int l)
{
    for (int i = 1; i <= k; i++){
        for (int j = 1; j <= l; j++){
            cout << "(" << i << "," << j << ")-" << tab[i][j] << " ";
        }
        cout << "\n";
    }
}

int koszt (int x, int y)
{
    for (int j = 2; j <= y; j++){
        for (int i = 1; i <= x; i++){
            tab[i][j] += min(tab[i-1][j-1],min(tab[i][j-1],tab[i+1][j-1]));
        }
    }
    //wypisanie_tablicy(x,y);
    int mn = 2000000000;
    for (int i = 1; i <= x; i++){
        if (tab[i][y] <= mn)     mn = tab[i][y];
    }
    return mn;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        zero();
        wczytywanie(a,b);
        //wypisanie_tablicy(a,b);
        cout << koszt(a,b) << "\n";
    }
    return 0;
}
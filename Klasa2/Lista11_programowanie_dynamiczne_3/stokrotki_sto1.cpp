#include <bits/stdc++.h>
using namespace std;

int tab[1010][1010];
int t, a, b;

void zero()
{
    for (int i = 0; i <= 1000; i++){
        for (int j = 0; j <= 1000; j++){
            tab[i][j] = 2000000000;
        }
    }
}

int koszt ()
{
    for (int j = 2; j <= b; j++){
        for (int i = 1; i <= a; i++){
            tab[i][j] += min(tab[i-1][j-1],min(tab[i][j-1],tab[i+1][j-1]));
        }
    }
    int mini = 2000000000;
    for (int i = 1; i <= a; i++){
        if (tab[i][b] <= mini)     mini = tab[i][b];
    }
    return mini;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        zero();
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= b; j++){
                cin >> tab[i][j];
            }
        }
        cout << koszt() << "\n";
    }
    return 0;
}
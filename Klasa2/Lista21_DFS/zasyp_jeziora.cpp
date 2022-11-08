#include <bits/stdc++.h>
using namespace std;

int tab[105][105];
int n;

void DFS (int i, int j, int wart, int fil)
{
    tab[i][j] = fil;
    if (i > 0 && tab[i-1][j] == wart) DFS(i-1,j,wart,fil);
    if (i < n-1 && tab[i+1][j] == wart) DFS(i+1,j,wart,fil);
    if (j < n-1 && tab[i][j+1] == wart) DFS(i,j+1,wart,fil);
    if (j > 0 && tab[i][j-1] == wart) DFS(i,j-1,wart,fil);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> tab[i][j];
        }
    }
    DFS(0,0,0,2);
    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < n-1; j++){
            if (tab[i][j] == 0) tab[i][j] = 1;
        }
    }
    DFS(0,0,2,0);
    cout << "\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << tab[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
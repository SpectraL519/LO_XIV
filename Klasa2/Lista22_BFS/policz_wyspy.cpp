#include <iostream>
using namespace std;

int tab[102][102];

int n, licznik = 0;

void DFS (int i, int j)
{
    tab[i][j] = 2;
    if (tab[i-1][j] == 1)   DFS (i-1,j);
    if (tab[i+1][j] == 1)  DFS (i+1,j);
    if (tab[i][j-1] == 1)  DFS (i,j-1);
    if (tab[i][j+1] == 1)  DFS (i,j+1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> tab[i][j];
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (tab[i][j] == 1){
                DFS(i,j);
                licznik++;
            }
        }
    }
    cout << licznik;
    return 0;
}


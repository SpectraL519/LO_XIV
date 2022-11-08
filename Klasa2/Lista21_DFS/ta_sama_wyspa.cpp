#include <iostream>
using namespace std;

int tab[102][102];

int n, licznik = 0, nr = 2, q, a, b, x, y;

void DFS (int i, int j)
{
    tab[i][j] = nr;
    if (tab[i-1][j] == 1)   DFS (i-1,j);
    if (tab[i+1][j] == 1)  DFS (i+1,j);
    if (tab[i][j-1] == 1)  DFS (i,j-1);
    if (tab[i][j+1] == 1)  DFS (i,j+1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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
                nr++;
            }
        }
    }
    cout << "\n";
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> a >> b >> x >> y;
        if (tab[b][a] == tab[y][x])     cout << "TAK\n";
        else    cout << "NIE\n";
    }
    return 0;
}


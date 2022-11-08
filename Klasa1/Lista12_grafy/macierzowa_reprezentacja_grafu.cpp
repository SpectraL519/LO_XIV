#include <iostream>
using namespace std;

int G [1001][1001];

int n, m, a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        G[a][b] = 1;
        G[b][a] = 1;
    }
    cout << "Macierz:\n";
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << G[i][j];
        }
        cout << "\n";
    }
    cout << "Lista:\n";
    for (int i = 1; i <= n; i++){
        cout << i << ": ";
        for (int j = 1; j <= n; j++){
            if (G[i][j] == 1){
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
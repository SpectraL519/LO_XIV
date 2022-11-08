#include <iostream>
#include <vector>
using namespace std;

vector <int> G [1000001];
int col [1000001];

int t, n, m, a, b, kolor = 1;
bool dasie = true;

void zero()
{
    for (int i = 1; i <= n; i++){
        G[i].clear();
    }
    for (int i = 0; i < 1000001; i++){
        col[i] = 0;
    }
    kolor = 1;
    dasie = true;
}

void DFS (int i)
{
    col[i] = kolor;
    for (int j = 0; j < G[i].size(); j++){
        if (col[G[i][j]] == 0){
            if (col[i] == 1){
                kolor = 2;
                DFS(G[i][j]);
            }
            else{
                kolor = 1;
                DFS(G[i][j]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> m;
        for (int j = 0; j < m; j++){
            cin >> a >> b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        for (int j = 1; j <= n; j++){
            if (col[j] == 0){
                kolor = 1;
                DFS(j);
            }
        }
        for (int j = 1; j <= n; j++){
            for (int k = 1; k < G[j].size(); k++){
                if (col[j] == col[G[j][k]]){
                    dasie = false;
                    break;
                }
            }
            if (dasie == false) break;
        }
        cout << "\n";
        /*for (int j = 1; j <= n; j++){
            cout << j << ": ";
            for (int k = 0; k < G[j].size(); k++){
                cout << G[j][k] << "(" << col[G[j][k]] << ") ";
            }
            cout << "\n";
        }*/
        if (dasie == true)  cout << "TAK\n";
        else    cout << "NIE\n";
        zero();
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue <int> Q;
vector <int> G [100001];
int vis [100001];

int n, m, b, x, y, a, v, mini = 100010, ans, bar;

void BFS (int p)
{
    vis[p] = 1;
    Q.push(p);
    while (!Q.empty()){
        v = Q.front();
        Q.pop();
        for (int i = 0; i < G[v].size(); i++){
            if (vis[G[v][i]] == 0){
                Q.push(G[v][i]);
                vis[G[v][i]] = vis[v] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m >> b;
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cin >> a;
    /*cout << "\n";
    for (int i = 1; i <= n; i++){
        cout << i << ": ";
        for (int j = 0; j < G[i].size(); j++){
            cout << G[i][j] << " ";
        }
        cout << "\n";
    }*/
    BFS(a);
    for (int i = 0; i < b; i++){
        cin >> bar;
        if (vis[bar] <= mini && vis[bar] != 0){
            mini = vis[bar];
            ans = bar;
        }
        //cout << vis[bar] << " ";
    }
    cout << "\n" << ans;
    return 0;
}
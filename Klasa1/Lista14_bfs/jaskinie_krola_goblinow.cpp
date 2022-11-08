#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> G [1000001];
queue <int> Q;
int vis [1000001];

int n, m, a, b, ans = 1000001, maxi = -1, v;

void BFS (int p)
{
    vis[p] = 1;
    Q.push(p);
    while (!Q.empty()){
        v = Q.front();
        Q.pop();
        for (int i = 0; i < G[v].size(); i++){
            if (vis[G[v][i]] == 0 && G[v][i] > 1){
                Q.push(G[v][i]);
                vis[G[v][i]] = vis[v] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    BFS(1);
    for (int i = 1; i <= n; i++){
        if (vis[i] > maxi){
            maxi = vis[i];
            ans = i;
        }
        else if (vis[i] == maxi){
            if (i < ans){
                maxi = vis[i];
                ans = i;
            }
        }
    }
    cout << ans;
    return 0;
}
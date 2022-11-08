#include <bits/stdc++.h>
using namespace std;

vector <int> G[1000003];
vector <int> vis;
queue <int> Q;
bool ok = true;
int n, m;

void BFS (int w)
{
    int x, v;
    Q.push(w);
    vis[w] = 1;
    while(!Q.empty()){
        x = Q.front();
        Q.pop();
        for (int i = 0; i < G[x].size(); i++){
            v = G[x][i];
            if (vis[v] == 0){
                Q.push(v);
                vis[v] = -vis[x];
            }
            else if (vis[v] == vis[x])  ok = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int a, b, p = 1;
    cin >> n >> m;
    vis.resize(n+1,0);
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i <= n; i++){
        if (G[i].size() == 1){
            vis[i] = 1;
            p = i;
        }
    }
    BFS(p);
    if (ok) cout << "TAK";
    else    cout << "NIE";
    return 0;
}

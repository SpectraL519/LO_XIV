#include <bits/stdc++.h>
using namespace std;

vector <int> G[100003];
queue <int> Q;
vector <bool> vis;
int p, k, m;


void BFS (int w) /// wierzchołek, ojciec
{
    int x, v;
    vis.resize(m+1,false);
    Q.push(w);
    vis[w] = true;
    while (!Q.empty()){
        x = Q.front();
        Q.pop();
        for (int i = 0; i < G[x].size(); i++){
            v = G[x][i];
            if (!vis[v]){
                Q.push(v);
                vis[v] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int a, b;
    cin >> p >> k >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    BFS(p);
    if (vis[k]) cout << "TAK";
    else    cout << "NIE";
    return 0;
}


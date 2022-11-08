#include <bits/stdc++.h>
using namespace std;

#define INF 100001

vector <int> G[INF];
vector <int> low, dad, nr;
vector <bool> vis;
priority_queue < pair <int,int> > Ans;
int t, n, m;

void INIT ()
{
    int a, b;
    cin >> n >> m;
    low.resize(n+1,INF);
    nr.resize(n+1);
    dad.resize(n+1);
    vis.resize(n+1);
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
}

int prawie_DFS (int p)
{
    int v;
    t++;
    nr[p] = t;
    low[p] = t;
    vis[p] = true;
    for (int i = 0; i < G[p].size(); i++){
        v = G[p][i];
        if (!vis[v]){
            dad[v] = p;
            low[p] = min(prawie_DFS(v),low[p]);
        }
        else if (dad[p] != v){
            low[p] = min(nr[v],low[p]);
        }
    }
    return low[p];
}

void Print ()
{
    for (int i = 2; i <= n; i++){
        if (nr[i] == low[i]){
            Ans.push(make_pair(-min(i,dad[i]),-max(i,dad[i])));
        }
    }
    while (!Ans.empty()){
        cout << "\n" << -Ans.top().first << " " << -Ans.top().second;
        Ans.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    INIT();
    prawie_DFS(1);
    Print();
    return 0;
}

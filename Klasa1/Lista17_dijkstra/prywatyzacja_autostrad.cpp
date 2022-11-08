#include <bits/stdc++.h>
using namespace std;

int n, e, a, b, c;
pair <int,int> v;
vector < pair<int,int> > G [7001];
int vis [7001];
priority_queue < pair<int,int> > Q;

void dijkstra (int p)
{
    vis[p] = 0;
    for (int i = 0; i < G[p].size(); i++){
        Q.push(make_pair(G[p][i].first,G[p][i].second));
    }
    while (!Q.empty()){
        v = Q.top();
        Q.pop();
        if (vis[v.second] == 2e9){
            vis[v.second] = -v.first;
            for (int i = 0; i < G[v.second].size(); i++){
                if (vis[G[v.second][i].second] == 2e9){
                    Q.push({G[v.second][i].first + v.first,G[v.second][i].second});
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> e;
    for (int i = 0; i < e; i++){
        cin >> a >> b >> c;
        G[a].push_back(make_pair(-c,b));
        G[b].push_back(make_pair(-c,a));
    }
    for (int i = 1; i <= n; i++){
        vis[i] = 2e9;
    }
    dijkstra(1);
    for (int i = 2; i <= n; i++){
        cout << vis[i] << " ";
    }
    return 0;
}
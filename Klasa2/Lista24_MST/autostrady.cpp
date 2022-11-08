#include <bits/stdc++.h>
using namespace std;

int v, e, a, b, c, cost = 0; /// miasta, autostrady, m. pocz., m. kon., koszt, wynik
vector < pair<int,int> > G [1001];
priority_queue < pair<int,int> > Q;
int vis [1001];

void prawie_BFS (int p)
{
    pair <int,int> q;
    vis[p] = 1;
    for (int i = 0; i < G[p].size(); i++){
        Q.push(make_pair(G[p][i].first,G[p][i].second));
    }
    while (!Q.empty()){
        q = Q.top();
        Q.pop();
        if (vis[q.second] == 0){
            vis[q.second] = 1;
            cost -= q.first;
            for (int i = 0; i < G[q.second].size(); i++){
                if (vis[G[q.second][i].second] == 0){
                    Q.push(make_pair(G[q.second][i].first,G[q.second][i].second));
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> v >> e;
    for (int i = 0; i < e; i++){
        cin >> a >> b >> c;
        G[a].push_back(make_pair(-c,b));
        G[b].push_back(make_pair(-c,a));
    }
    prawie_BFS(1);
    cout << cost;
    return 0;
}

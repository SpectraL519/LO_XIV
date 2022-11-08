#include <bits/stdc++.h>
using namespace std;

#define inf 2e9
#define mp make_pair

vector <vector < pair <int,int> > > G;
priority_queue < pair <int,int> > Q;
vector <int> vis;
int n, m;

void Init ()
{
    int a, b, c;
    cin >> n >> m;
    G.resize(n+1);
    vis.resize(n+1,inf);
    vis[1] = 0;
    for (int i = 0; i < m; i++){
        cin >> a >> b >> c;
        //G[a].push_back(mp(b,c));
        G[b].push_back(mp(a,c));
    }
}

void Dijkstra (int v)
{
    pair <int,int> u;
    int w, nr; /// pomocnicza waga, pomocniczy nr
    for (int i = 0; i < G[v].size(); i++){
        Q.push(mp(-G[v][i].second,G[v][i].first));
    }
    while(!Q.empty()){
        w = -Q.top().first;
        nr = Q.top().second;
        if (w < vis[nr]){
            vis[nr] = w;
            for (int i = 0; i < G[nr].size(); i++){
                u = G[nr][i];
                if (vis[u.first] > u.second + w){
                    Q.push(mp(-u.second-w,u.first));
                }
            }
        }
        Q.pop();
    }
}

void Print ()
{
    for (int i = 2; i <= n; i++){
        cout << vis[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    Init();
    Dijkstra(1);
    Print();
    return 0;
}

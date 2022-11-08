#include <bits/stdc++.h>
using namespace std;

vector <int> G[1000003];
queue < pair <int,int> > Q;
bool vis [1000003];
bool cycle = false;
int n, m;

void BFS (int w, int f) /// wierzchołek, ojciec
{
    int x, y, v;
    vis[w] = true;
    Q.push(make_pair(w,f));
    while (!Q.empty()){
        x = Q.front().first;
        y = Q.front().second;
        Q.pop();
        for (int i = 0; i < G[x].size(); i++){
            v = G[x][i];
            if (!vis[v]){
                vis[v] = true;
                Q.push(make_pair(v,x));
            }
            else if (v != y){
                cycle = true;
                while (!Q.empty())    Q.pop();
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
        if (a == b) cycle = true;
    }
    if (cycle)  cout << "TAK";
    else{
        for (int i = 1; i <= n; i++){
            if (!vis[i])    BFS(i,i);
        }
        if (cycle)  cout << "TAK";
        else    cout << "NIE";
    }
    return 0;
}

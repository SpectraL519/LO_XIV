#include <bits/stdc++.h>
using namespace std;

int tab [1010][1010];
queue < pair <int,int> > Q;
int w, h, n, q;

void Init ()
{
    int a, b;
    cin >> w >> h >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> a >> b;
        tab[a][b] = i;
        Q.push(make_pair(a,b));
    }
    for (int i = 0; i <= h; i++){
        tab[0][i] = -1;
        tab[w+1][i] = -1;
    }
    for (int i = 0; i <= w; i++){
        tab[i][0] = -1;
        tab[i][h+1] = -1;
    }
}

void BFS ()
{
    int x, y, tx, ty;
    int dx[] = {1,-1,0,0}, dy[] = {0,0,-1,1};
    while (!Q.empty()){
        x = Q.front().first;
        y = Q.front().second;
        Q.pop();
        for (int i = 0; i < 4; i++){
            tx = x + dx[i];
            ty = y + dy[i];
            if (tab[tx][ty] == 0){
                Q.push(make_pair(tx,ty));
                tab[tx][ty] = tab[x][y];
            }
        }
    }
}

void Ans ()
{
    int a, b;
    for (int i = 0; i < q; i++){
        cin >> a >> b;
        cout << tab[a][b] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    Init();
    BFS();
    Ans();
    return 0;
}

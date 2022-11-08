#include <bits/stdc++.h>
using namespace std;

vector <int> G [1000003];

int t, n, m, a, b;

void data ()
{
    for (int i = 1; i <= n; i++)    G[i].clear();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i = 0; i < m; i++){
            cin >> a >> b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        for (int i = 1; i <= n; i++){
            cout << G[i].size() << " ";
        }
        data();
        cout << "\n";
    }
    return 0;
}

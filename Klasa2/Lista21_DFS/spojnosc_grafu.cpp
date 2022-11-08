#include <iostream>
#include <vector>
using namespace std;

vector <int> G [1000001];

int t, n, m, a, b;
bool spoj = true;

void zero()
{
    for (int i = 1; i <= n; i++){
        G[i].clear();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> m;
        for (int j = 0; j < m; j++){
            cin >> a >> b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        for (int j = 1; j <= n; j++){
            if (G[j].size() < n - 1){
                spoj = false;
                break;
            }
            ///cout << G[j].size() << " ";
        }
        if (spoj == true)   cout << "TAK\n";
        else    cout << "NIE\n";
        zero();
        spoj = true;
    }
    return 0;
}

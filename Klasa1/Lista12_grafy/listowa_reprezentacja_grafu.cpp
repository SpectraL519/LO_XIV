#include <iostream>
#include <vector>
using namespace std;

vector <int> G [100001];

int n, m, a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i <= n; i++){
        if (G[i].empty() == false){
            cout << "vertex " << i << " has neighbours ";
            for (int j = 0; j < G[i].size(); j++){
                cout << G[i][j] << " ";
            }
        }
        else{
            cout << "vertex " << i << " has no neighbours";
        }
        cout << "\n";
    }
    return 0;
}

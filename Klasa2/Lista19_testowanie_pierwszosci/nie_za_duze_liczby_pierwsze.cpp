#include <bits/stdc++.h>
using namespace std;

bool tab[100003]; /// 0-zlozona; 1-pierwsza
bool vis[100003]; /// 0-nieodwiedzona; 1-odwiedzona

bool prime (int a)
{
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++){
        if (!vis[i] && prime(i)){
            tab[i] = true;
            for (int j = 2*i; j <= n; j += i){
                vis[j] = true;
            }
        }
        vis[i] = true;
    }
    for (int i = 2; i <= n; i++){
        if (tab[i]) cout << i << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int quant[100003];
bool t_prime[100003]; /// 0-zlozona; 1-pierwsza
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
    int p, q, l = 0;
    cin >> p >> q;
    quant[1] = 0;
    for (int i = 2; i <= 100000; i++){
        if (!vis[i] && prime(i)){
            t_prime[i] = true;
            l++;
            for (int j = 2*i; j <= 100000; j += i){
                vis[j] = true;
            }
        }
        vis[i] = true;
        quant[i] = l;
    }
    cout << quant[q] - quant[p-1];
    return 0;
}

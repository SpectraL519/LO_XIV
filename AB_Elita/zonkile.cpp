#include <iostream>
using namespace std;
int tab[1000010];
int t[1000010];
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int n;
    int s = 0;
    cin >> n;
    char z;
    for (int i = 1; i <= n; i++){
        cin >> z;
        tab[i] = z;
        if (tab[i] == 35)   s++;
        t[i] = s;
    }
    t[0] = 0;
    int q, k, l, w;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> k >> l;
        w = t[l] - t[k-1];
        cout << w << "\n";
    }
    return 0;
}
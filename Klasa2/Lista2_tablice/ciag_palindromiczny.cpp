#include <bits/stdc++.h>
using namespace std;

int tab[1000001];
int n, k = 0;
bool p = 1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    while (n != -1){
        tab[k] = n;
        k++;
        cin >> n;
    }
    k--;
    for (int i = 0; i <= k/2; i++){
        if (tab[i] != tab[k-i]){
            p = 0;
            break;
        }
    }
    if (p)  cout << 1;
    else    cout << 0;
    return 0;
}
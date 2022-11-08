#include <bits/stdc++.h>
using namespace std;

int tab[101];
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    while (n != -1){
        tab[n]++;
        cin >> n;
    }
    for (int i = 0; i <= 100; i++){
        while (tab[i] > 0){
            cout << i << " ";
            tab[i]--;
        }
    }
    return 0;
}
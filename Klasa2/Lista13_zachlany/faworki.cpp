#include <bits/stdc++.h>
using namespace std;

int tab[1000010]; /// tablica faworkow
int n; /// liczba talerzy
int p, k; /// pozycja bajtosi, pozycja bajtka
int x, y; /// faworki bajtosi, faworki bajtka

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> tab[i];
        k += tab[i];
    }
    p = 1;
    x = tab[1];
    k = n;
    y = tab[n];
    while (p < k-1){
        if (x + tab[p+1] <= y + tab[k-1]){
            p++;
            x += tab[p];
        }
        else{
            k--;
            y += tab[k];
        }
    }
    cout << p << " " << n - p;
    return 0;
}
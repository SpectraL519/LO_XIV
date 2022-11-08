#include <bits/stdc++.h>
using namespace std;

int n, h; /// liczba ksiazek, wys poszczegolnych ksiazek
int k; /// maks suma wys miedzy przegrodkami
int s, p; /// tymczasowa suma, licznik przegrodek

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    s = 0;
    p = 0;
    for (int i = 0; i < n; i++){
        cin >> h;
        s += h;
        if (s > k){
            s = h;
            p++;
        }
    }
    cout << p;
    return 0;
}
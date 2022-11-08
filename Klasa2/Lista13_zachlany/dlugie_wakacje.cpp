#include <bits/stdc++.h>
using namespace std;

pair <int,int> tab[1000010]; /// terminy wakacji
int n; /// liczba terminow wakacji
int p, q; /// pocz i kon terminu wakacji
int l = 1; /// licznik wakacji
int k = 0; /// indeks aktualnego konca wakacji

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> p >> q;
        tab[i] = make_pair (q,p);
    }
    sort (tab, tab+n);
    for (int i = 1; i < n; i++){
        if (tab[i].second > tab[k].first){
            l++;
            k = i;
        }
    }
    cout << l;
    return 0;
}
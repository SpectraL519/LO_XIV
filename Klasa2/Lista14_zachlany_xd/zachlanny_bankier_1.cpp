#include <bits/stdc++.h>
using namespace std;

int k; /// kwota
int tab[7];

void nominaly()
{
    tab[0] = 100;
    tab[1] = 50;
    tab[2] = 20;
    tab[3] = 10;
    tab[4] = 5;
    tab[5] = 2;
    tab[6] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    nominaly();
    cin >> k;
    for (int i = 0; i < 7; i++){
        if (tab[i] <= k){
            while(tab[i] <= k){
                cout << tab[i] << " ";
                k -= tab[i];
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int tab[1000010];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool klamstwo = 0;
    int n, w = 0;
    cin >> n;
    int k;
    for (int i = 1; i <= n; i++){
        cin >> tab[i];
        if (tab[i] == i)    {w++; tab[i] = 0;}
    }
    for (int i = 1; i <= n; i++){
        if (tab[i] != 0){
            int j = i;
            while (tab[j] != i){
                if (tab[j] != 0){
                    int x = j;
                    j = tab[j];
                    tab[x] = 0;
                }
                else    {klamstwo = 1; break;}
            }
            tab[j] = 0;
            w++;
        }
    }
    if (klamstwo == 0)      cout << w;
    else    cout << "NIE";
    return 0;
}
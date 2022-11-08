#include <iostream>
using namespace std;

int tab[100];

int n, niep_pos;
string a;

void zero()
{
    for (int i = 65; i <= 90; i++){
        tab[i] = 0;
    }
}

bool czy_sie_da()
{
    niep_pos = 0;
    for (int i = 0; i < a.size(); i++){
        tab[a[i]]++;
    }
    int niep = 0;
    for (int i = 65; i <= 90; i++){
        if (tab[i] % 2 != 0){
            niep++;
            niep_pos = i;
        }
    }
    if (niep > 1){
        niep_pos = 0;
        return false;
    }
    else    return true;
}

void tworzenie_palindromu()
{
    char litera;
    for (int i = 65; i <= 90; i++){
        int p;
        if (i != niep_pos){
            p = tab[i] / 2;
            while (tab[i] > p){
                litera = i;
                cout << litera;
                tab[i]--;
            }
        }
        else{
            p = (tab[i] / 2) + 1;
            while (tab[i] > p){
                litera = i;
                cout << litera;
                tab[i]--;
            }
        }
    }
    if (niep_pos != 0){
        litera = niep_pos;
        cout << litera;
        tab[niep_pos]--;
    }
    for (int i = 90; i >= 65; i--){
        while (tab[i] > 0){
            litera = i;
            cout << litera;
            tab[i]--;
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (czy_sie_da() == 1){
            tworzenie_palindromu();
            //cout << 1;
        }
        else{
            cout << -1 << "\n";
            zero();
        }
    }
    return 0;
}
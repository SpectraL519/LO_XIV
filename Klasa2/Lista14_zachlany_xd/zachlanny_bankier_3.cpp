#include <bits/stdc++.h>
using namespace std;

int k, n; /// kwota, liczba nominalow
int nom[101]; /// tablica nominalow



int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)     cin >> nom[i];
    cin >> k;
    for (int i = 0; i < n; i++){
        if (nom[i] <= k){
            while(nom[i] <= k){
                cout << nom[i] << " ";
                k -= nom[i];
            }
        }
    }
    if (k != 0)     cout << "klops...";
    return 0;
}
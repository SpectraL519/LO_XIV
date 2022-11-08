#include <bits/stdc++.h>
using namespace std;

int k, n; /// kwota, liczba nominalow
int nom[101]; /// tablica nominalow
queue <int> Q; /// kolejka odpowiedzi

bool comp (int a, int b)
{
    if (a > b)  return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)     cin >> nom[i];
    sort(nom,nom+n,comp);
    cin >> k;
    for (int i = 0; i < n; i++){
        if (nom[i] <= k){
            while(nom[i] <= k){
                Q.push(nom[i]);
                k -= nom[i];
            }
        }
    }
    if (k != 0)     cout << "NIE";
    else{
        while(!Q.empty()){
            cout << Q.front() << " ";
            Q.pop();
        }
    }
    return 0;
}
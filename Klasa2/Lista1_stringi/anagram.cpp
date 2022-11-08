#include <bits/stdc++.h>
using namespace std;

int tab[300];
int t[300];
vector <string> lista;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    int n;
    cin >> a;
    for (int i = 0; i < a.size(); i++){
        tab[i] = a[i];
    }
    sort (tab,tab+a.size());
    cin >> n;
    for (int j = 0; j < n; j++){
        cin >> b;
        for (int i = 0; i < b.size(); i++){
            t[i] = b[i];
        }
        sort (t,t+b.size());
        bool anagram = 1;
        if (a.size() != b.size())   anagram = 0;
        else{
            for (int i = 0; i < a.size(); i++){
                if (tab[i] != t[i]){
                    anagram = 0;
                    break;
                }
            }
        }
        if (anagram == 1) lista.push_back(b);
    }
    cout << "\n";
    for (int i = 0; i < lista.size(); i++){
        cout << lista[i] << "\n";
    }
    return 0;
}
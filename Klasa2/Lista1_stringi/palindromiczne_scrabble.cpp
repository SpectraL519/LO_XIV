#include <bits/stdc++.h>
using namespace std;

int tab[26];

string a, b;
char x;
int p = -1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> a;
    for (int i = 0; i < a.size(); i++){
        tab[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if (tab[i] % 2 == 1){
            if (p == -1)    p = i;
            tab[i]--;
        }
        for (int j = 0; j < tab[i] / 2; j++){
            x = i + 'a';
            b += x;
        }
    }
    cout << b;
    if (p != -1){
        x = p + 'a';
        cout << x;
    }
    for (int i = b.size() - 1; i >= 0; i--){
        cout << b[i];
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int tab [26];
int n, m = 0;
char l;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> l;
        tab[l - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if (tab[i] > m){
            m = tab[i];
            l = i + 'a';
        }
    }
    cout << m << " " << l;
    return 0;
}
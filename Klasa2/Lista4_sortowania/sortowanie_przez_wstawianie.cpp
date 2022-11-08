#include <bits/stdc++.h>
using namespace std;

int tab[100001];

int n, j, x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    for (int i = 1; i < n; i++){
        j = i-1;
        while (j >= 0 && tab[j] > tab[j+1]){
            x = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = x;
            j--;
        }
    }
    for (int i = 0; i < n; i++){
        cout << tab[i] << " ";
    }
    return 0;
}
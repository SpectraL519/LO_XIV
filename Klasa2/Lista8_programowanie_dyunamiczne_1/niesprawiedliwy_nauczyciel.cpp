#include <bits/stdc++.h>
using namespace std;

int tab[1001];
int n;
char z;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) tab[i] = 1;
    for (int i = 0; i < n-1; i++){
        cin >> z;
        if (z == '=')   tab[i+1] = tab[i];
        else if (z == 'R')  tab[i+1] = tab[i] + 1;
        else if (z == 'L'){
            if (tab[i] == 1){
                int j = i;
                while (tab[j-1]-tab[j] <= 1 && tab[j-1]-tab[j] >= 0)  j--;
                while (j <= i){
                    tab[j]++;
                    j++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << tab[i] << " ";
    }
    return 0;
}
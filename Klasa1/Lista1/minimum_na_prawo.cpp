#include <iostream>
#include <algorithm>
using namespace std;
int tab [1000010];
int tab2 [1000010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    int m = 2000000000;
    for (int i = n-1; i >= 0; i--){
        if (tab[i] < m){
            m = tab[i];
        }
        tab2[i] = m;
    }
    for (int i = 0; i < n; i++){
        cout << tab2[i] << " ";
    }
    return 0;
}
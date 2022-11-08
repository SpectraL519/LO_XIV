#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long tab[1000010];

int main()
{
    int n, t, p, k;
    long long s = 0, a, wynik;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        s += a;
        tab[i] = s;
    }
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> p >> k;
        wynik = tab[k] - tab[p-1];
        cout << wynik << "\n";
    }

    return 0;
}
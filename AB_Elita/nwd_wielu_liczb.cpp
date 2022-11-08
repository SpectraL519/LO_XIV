#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int tab[100010];

int NWD (int a, int b)
{
    int t;
    while (b > 0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main()
{
    int n, nwd_obecne;
    cin >> n;
    cin >> tab[0];
    for (int i = 1; i < n; i++){
        cin >> tab[i];
        nwd_obecne = NWD(tab[i], tab[i-1]);
        tab[i] = nwd_obecne;
    }
    cout << nwd_obecne;
    return 0;
}
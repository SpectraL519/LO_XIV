#include <iostream>
#include <cmath>
using namespace std;
int tab[1000000];
/*int silnia (int n)
{
    int wynik;
    if (n == 1)
    {
        wynik = 1;
    }
    else if (n == 0)
    {
        wynik = 1;
    }
    else
    {
        wynik = n * silnia(n-1);
    }
    return wynik;
}
int newton (int n, int k)
{
    int wynik;
    int sn = silnia(n), sk = silnia(k), snk = silnia(n-k);
    wynik = sn/(sk*snk);
    return wynik;
}*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int d, n, m, k = 0, w = 1;
    /*int w = 0;
    cin >> d;
    for (int i = 0; i < d; i++){
        cin >> n;
        w += newton(i,d);
    }
    w += newton(d,d);*/
    cin >> d;
    cin >> m;
    tab[k] = 1;
    for (int i = 1; i < d; i++){
        cin >> n;
        if (n == m)     tab[k]++;
        else{
            k++;
            tab[k] = 1;
            m = n;
        }
    }
    k = 0;
    while (tab[k] != 0){
        w *= (tab[k] + 1);
        k++;
    }
    cout << w;
    return 0;
}
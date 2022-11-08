#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, y;
    cin >> n;
    cin >> x >> y;
    int wynik;
    wynik = x ^ y;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        cin >> y;
        wynik = wynik ^ y;
    }
    cout << wynik;
    return 0;
}
#include <iostream>
using namespace std;
int tab[100];
int t[10];
int main ()
{
    t[0] = 1, t[1] = 2, t[2] = 5;
    int n = 0, m = 0;
    int k = 1, l = 0;
    string x;
    cin >> x;
    for (int i = 0; i < 15; i++){
        if (i % 3 == 0 && i != 0)   {k *= 10; l += 3;}
        tab[i] = (x[i] - 48) * t[i - l] * k;
        n += tab[i];
    }
    m = n % 100;
    cout << n / 100 << ".";
    if (m < 10)       cout << 0 << m;
    else    cout << m;
    return 0;
}
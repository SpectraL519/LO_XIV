#include <iostream>
using namespace std;
long long int tab[100010];
int main ()
{
    long long int n, m = 0, s = 0;
    cin >> n;
    for (long long int i = 0; i < n; i++){
        cin >> tab[i];
        s += tab[i];
        if (tab[i] > m)    m = tab[i];
    }
    if (n == 2)  cout << "NIE";
    else{
        if (s-m > m)    cout << "TAK";
        else    cout << "NIE";
    }
    return 0;
}
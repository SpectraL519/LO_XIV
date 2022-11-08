#include <iostream>
#include <cmath>
using namespace std;
int tab[1000010];
int main()
{
    bool p = 1;
    for (int i = 1; i <= 1000000; i++){
        tab[i] = 0;
    }
    int k;
    for (int i = 1; i <= 1000000; i++){
        k = 1;
        while (i * k <= 1000000){
            tab[i*k]++;
            k++;
        }
    }
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        cout << tab[n] << "\n";
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int tab[50010];

int main()
{
    int n, a, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        s += a;
        tab[i] = a;
    }
    for (int i = 0; i < n; i++){
        cout << s << " ";
        s -= tab[i];
    }

    return 0;
}

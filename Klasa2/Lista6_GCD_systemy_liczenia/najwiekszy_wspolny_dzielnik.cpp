#include <bits/stdc++.h>
using namespace std;

long long t, x, y;

long long GCD (long long a, long long b)
{
    long long c;
    while (b != 0){
        c = a % b;
        a= b;
        b = c;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x >> y;
        cout << GCD(x,y) << "\n";
    }
    return 0;
}
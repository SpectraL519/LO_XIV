#include <bits/stdc++.h>
using namespace std;

long long n, x, y;

long long NWD (long long  a, long long b)
{
    long long c;
    while (b != 0){
        c = a % b;
        a= b;
        b = c;
    }
    return a;
}

long long NWW (long long  a, long long b)
{
    return (a / NWD(a,b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    cin >> x;
    for (int i = 1; i < n; i++){
        cin >> y;
        x = NWW(x,y);
    }
    cout << x;
    return 0;
}
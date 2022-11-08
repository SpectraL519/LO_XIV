#include <bits/stdc++.h>
using namespace std;

long long x, y;

long long NWD (int a, int b)
{
    long long c;
    while (b != 0){
        c = a % b;
        a= b;
        b = c;
    }
    return a;
}

long long NWW (int a, int b)
{
    return (a / NWD(a,b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> x >> y;
    cout << NWW(x,y);
    return 0;
}
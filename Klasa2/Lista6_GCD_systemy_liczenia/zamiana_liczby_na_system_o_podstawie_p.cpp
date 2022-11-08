#include <bits/stdc++.h>
using namespace std;

long long n, p, a;
string s;

int main()
{
    //ios_base::sync_with_stdio(0);
    cin >> n >> p;
    while (n > 0){
        a = n % p;
        n /= p;
        s = char(a+'0') + s;
    }
    cout << s;
    return 0;
}
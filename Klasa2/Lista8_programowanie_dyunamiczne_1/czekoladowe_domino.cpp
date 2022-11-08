#include <bits/stdc++.h>
using namespace std;

long long fib [100001];
int t, n;

int main()
{
    ios_base::sync_with_stdio(0);
    fib[0] = 1;
    fib[1] = 1;
     for (int i = 2; i <= 100000; i++){
            fib[i] = (fib[i-1] + fib[i-2]) % 1000000009;
    }
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        cout << fib[n] << "\n";
    }
    return 0;
}
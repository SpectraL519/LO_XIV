#include <bits/stdc++.h>
using namespace std;

int n, a, s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        s += a;
        cout << s << "\n";
    }
    return 0;
}
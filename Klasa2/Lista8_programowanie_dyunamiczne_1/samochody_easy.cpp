#include <bits/stdc++.h>
using namespace std;

int n, a, s, l;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == 0)     l++;
        else    s += l;
    }
    cout << s;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int d, n, k;

int Newton (int a)
{
    int ans = 0;
    for (int i = 2; i <= a; i *= 2){
        ans += (a/i);
    }
    return ans;
}

int main()
{
    //ios_base::sync_with_stdio(0);
    cin >> d;
    for (int i = 0; i < d; i++){
        cin >> n >> k;
        if( (Newton(n)-Newton(k)-Newton(n-k)) > 0)   cout << "P\n";
        else    cout << "N\n";
    }
    return 0;
}
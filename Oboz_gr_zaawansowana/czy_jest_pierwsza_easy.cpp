#include <bits/stdc++.h>
using namespace std;

bool prime (int a)
{
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, x;
    cin >> n;
    while (n--){
        cin >> x;
        if (prime(x))   cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}
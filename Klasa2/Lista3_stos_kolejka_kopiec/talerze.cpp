#include <bits/stdc++.h>
using namespace std;

stack <int> S;

int t, k, a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> k;
        if (k == 1){
            cin >> a;
            S.push(a);
        }
        else if (k == 0){
            cout << S.top() << "\n";
        }
        else if (k == -1){
            S.pop();
        }
    }
    return 0;
}
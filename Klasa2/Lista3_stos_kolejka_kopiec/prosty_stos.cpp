#include <bits/stdc++.h>
using namespace std;

stack <int> S;

int n, k;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == "push"){
            cin >> k;
            S.push(k);
        }
        else if (a == "pop" && !S.empty()){
            S.pop();
        }
        else if (a == "top" && !S.empty()){
            cout << S.top() << "\n";
        }
    }
    cout << "all done";
    return 0;
}
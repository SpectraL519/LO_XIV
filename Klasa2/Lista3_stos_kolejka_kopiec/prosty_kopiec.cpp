#include <bits/stdc++.h>
using namespace std;

priority_queue <int> Q;

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
            Q.push(k);
        }
        else if (a == "pop" && !Q.empty()){
            Q.pop();
        }
        else if (a == "top" && !Q.empty()){
            cout << Q.top() << "\n";
        }
    }
    cout << "all done";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

deque <int> Q;

int m, a, s;
string k;

int main()
{
    //ios_base::sync_with_stdio(0);
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> k;
        if (k == "DP"){
            cin >> a;
            Q.push_front(a);
        }
        else if (k == "DK"){
            cin >> a;
            Q.push_back(a);
        }
        else if (k == "OK"){
            Q.pop_back();
        }
        else if (k == "OP"){
            Q.pop_front();
        }
    }
    for (int i = 0; i < Q.size(); i++){
        s += Q[i];
    }
    cout << s;
    return 0;
}
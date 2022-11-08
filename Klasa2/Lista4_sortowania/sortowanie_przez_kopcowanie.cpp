#include <bits/stdc++.h>
using namespace std;

priority_queue <int> Q;

int n, x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        Q.push(-x);
    }
    while (!Q.empty()){
        cout << -Q.top() << " ";
        Q.pop();
    }
    return 0;
}
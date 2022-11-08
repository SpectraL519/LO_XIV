#include <bits/stdc++.h>
using namespace std;

int n, x, y, V;
typedef pair <int,int> pi;
vector <pi> A, B;

bool comp (pi a, pi b)
{
    V = (a.first*b.second)-(a.second*b.first);
    if (V > 0)  return true;
    else if (V < 0) return false;
    else{
        if (abs(a.first)<=abs(b.first) && abs(a.second)<=abs(b.second)) return true;
        else    return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        if (y>0 || (x>0 && y==0))  A.push_back(pi(x,y));
        else    B.push_back(pi(x,y));
    }
    sort (A.begin(),A.end(),comp);
    sort (B.begin(),B.end(),comp);
    for (int i = 0; i < A.size(); i++)  cout << A[i].first << " " << A[i].second << "\n";
    for (int i = 0; i < B.size(); i++)  cout << B[i].first << " " << B[i].second << "\n";
    return 0;
}
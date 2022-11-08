#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
pair <int,int> tab[100010];
bool komparator (pair <int,int> a, pair <int,int> b)
{
    long long p1, p2;
    p1 = (long long) a.first * a.second;
    p2 = (long long) b.first * b.second;
    if (p1 > p2)    return true;
    else if (p1 == p2){
        long long o1, o2;
        o1 = (long long) a.first * 2 + (long long) a.second * 2;
        o2 = (long long) b.first * 2 + (long long) b.second * 2;
        if (o1 < o2)    return true;
        else    return false;
    }
    else    return false;
}
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        tab[i] = make_pair(a,b);
    }
    sort (tab,tab+n,komparator);
    for (int i = 0; i < n; i++){
        cout << tab[i].first << " " << tab[i].second << "\n";
    }
    return 0;
}
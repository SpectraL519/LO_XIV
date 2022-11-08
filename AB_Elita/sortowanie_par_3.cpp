#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
pair <int,int> tab[100010];
int NWD (pair <int,int> a)
{
    while (a.first != a.second){
        if (a.first > a.second) a.first -= a.second;
        else    a.second -= a.first;
    }
    return a.first;
}
bool komparator (pair <int,int> a, pair <int,int> b)
{
    int nwd1, nwd2;
    nwd1 = NWD(a);
    nwd2 = NWD(b);
    if (nwd1 < nwd2)    return true;
    else if (nwd1 == nwd2){
        int r1, r2;
        r1 = a.second - a.first;
        r2 = b.second - b.first;
        if (r1 < r2)    return true;
        else if (r1 == r2){
            if (a.first < b.first)  return true;
            else    return false;
        }
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
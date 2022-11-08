#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
pair <int,int> tab[100010];
bool komparator (pair <int,int> a, pair <int,int> b)
{
    int d1, d2;
    d1 = a.second - a.first;
    d2 = b.second - b.first;
    if (d1 > d2)    return true;
    else if (d1 == d2){
        if (a.first < b.first)  return true;
        else    return false;
    }
    else return false;
}
int main()
{
    int n, p, k;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> p >> k;
        tab[i] = make_pair(p,k);
    }
    sort (tab,tab+n,komparator);
    for (int i = 0; i < n; i++){
        cout << tab[i].first << " " << tab[i].second << "\n";
    }
    return 0;
}
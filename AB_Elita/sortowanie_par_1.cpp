#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
pair <int,int> tab[100010];
pair <int,int> t[100010];
int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        tab[i] = make_pair(x,y);
        t[i] = make_pair(y,x);
    }
    sort (tab,tab+n);
    for (int i = 0; i < n; i++){
        cout << "(" << tab[i].first << "," << tab[i].second << ") ";
    }
    cout << "\n";
    sort (t,t+n);
    for (int i = 0; i < n; i++){
        cout << "(" << t[i].second << "," << t[i].first << ") ";
    }
    return 0;
}
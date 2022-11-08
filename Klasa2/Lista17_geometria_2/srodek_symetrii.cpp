#include <bits/stdc++.h>
using namespace std;

int t, n, x, y, sx, sy;
bool p;
pair <int,int> tab[10001];

bool comp (pair <int,int> a, pair <int,int> b)
{
    if (a.first < b.first)  return true;
    else if (a.first > b.first) return false;
    else{
        if (a.second <= b.second)   return true;
        else    return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        sx = 0;
        sy = 0;
        p = true;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> x >> y;
            tab[j] = make_pair(x,y);
            sx += x;
            sy += y;
        }
        sx /= n;
        sy /= n;
        sort(tab,tab+n,comp);
        /*cout << sx << " " << sy;
        for (int j = 0; j < n; j++){
            cout << "\n(" << tab[j].first << "," << tab[j].second << ")";
        }*/
        if (n%2 == 1){
            if (tab[n/2].first!=sx || tab[n/2].second!=sy){
                p = false;
            }
        }
        for (int j = 0; j < n/2; j++){
            if ((sx-tab[j].first)!=(tab[n-1-j].first-sx) || (sy-tab[j].second)!=(tab[n-1-j].second-sy)){
                p = false;
                break;
            }
        }
        if (p)  cout << "tak\n";
        else    cout << "nie\n";
    }
    return 0;
}
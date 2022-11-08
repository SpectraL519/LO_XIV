#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
pair <int,int> tab[1000010];
int main()
{
    int m = 1, n, x, y, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        tab[i] = make_pair (y,x);
    }
    sort (tab, tab+n);
    //cout << tab[0].second << " " << tab[0].first << "\n";
    for (int i = 1; i < n; i++){
        if (tab[i].second > tab[k].first){
            //cout << tab[i].second << " " << tab[i].first << "\n";

            m++;
            k = i;
        }
    }
    cout << m;
    return 0;
}
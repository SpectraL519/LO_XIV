#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int n, wzrost, waga, w = 0;

pair <int,int> tab[1000010];
pair <int,int> t[1000010];

bool comp1 (pair <int,int> a, pair <int,int> b)
{
    if (a.first < b.first)  return true;
    else    return false;
}

bool comp2 (pair <int,int> a, pair <int,int> b)
{
    if (a.second < b. second)   return true;
    else    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> wzrost >> waga;
        tab[i] = make_pair(wzrost,waga);
        t[i] = make_pair(wzrost,waga);
    }
    sort (tab,tab+n,comp1);
    sort (t,t+n,comp2);
    for (int i = 0; i < n; i++){
        if (tab[i].first == t[i].first && tab[i].second == t[i].second){
            w++;
        }
    }
    cout << w;
    return 0;
}
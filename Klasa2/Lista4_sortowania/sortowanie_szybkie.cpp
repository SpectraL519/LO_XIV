#include <bits/stdc++.h>
using namespace std;

int tab[100001];

int n, s;

int Partition (int p, int k)
{
    int pp = p;
    int kk = k;
    int pivot;
    int x = 1000100%(kk-pp+1)+pp;
    pivot=tab[x];
    swap(tab[x],tab[pp]);
    while (pp != kk){
        if (tab[pp+1] <= pivot){
            tab[pp] = tab[pp+1];
            pp++;
        }
        else{
            int x = tab[pp+1];
            tab[pp+1] = tab[kk];
            tab[kk] = x;
            kk--;
        }
    }
    tab[pp] = pivot;
    return pp;
}

void quick_sort (int p, int k)
{
    s = Partition(p,k);
    if (s-1 > p)   quick_sort(p,s-1);
    if (s+1 < k)   quick_sort(s+1,k);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    int p = 0;
    int k = n - 1;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    quick_sort(0,n-1);
    for (int i = 0; i < n; i++){
        cout << tab[i] << " ";
    }
    return 0;
}
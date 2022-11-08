#include <bits/stdc++.h>
using namespace std;

int A[1000001];
int B[1000001];

int n;

void Marge (int p, int q, int x, int y)
{
    /*cout << p << " " << q << " " << x << " " << y << endl;
    for (int i = p; i <= q; i++)    cout << A[i] << " ";
    cout << endl;
    for (int i = x; i <= y; i++)    cout << A[i] << " ";
    cout << endl << endl;*/
    int a = p;
    int k = p;
    while (p <= q && x <= y){
        if (A[p] < A[x]){
            B[a] = A[p];
            p++;
            a++;
        }
        else{
            B[a] = A[x];
            a++;
            x++;
        }
    }
    for (int i = p; i <= q; i++){
        B[a] = A[i];
        a++;
    }
    for (int i = x; i <= y; i++){
        B[a] = A[i];
        a++;
    }
    for (int i = k; i <= y; i++){
        A[i] = B[i];
    }
}

void marge_sort (int p, int k)
{
    if (p < k){
        int s = (p+k)/2;
        marge_sort(p,s);
        marge_sort(s+1,k);
        Marge(p,s,s+1,k);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    marge_sort(0,n-1);
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    return 0;
}
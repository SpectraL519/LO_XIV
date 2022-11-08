#include <bits/stdc++.h>
using namespace std;

int sum[2000];
int n, k, m = -1;

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        for (int j = n - i; j < 2 * n - i; j++){
            scanf("%d",&k);
            sum[j] += k;
        }
    }
    for (int i = 1; i < 2 * n; i++){
        if (sum[i] > m){
            m = sum[i];
            k = i;
        }
    }
    printf("%d %d",k,m);
    return 0;
}
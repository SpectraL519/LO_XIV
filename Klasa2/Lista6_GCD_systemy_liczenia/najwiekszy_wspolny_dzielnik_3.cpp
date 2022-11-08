#include <bits/stdc++.h>
using namespace std;

int x, y, z;

int GCD (int a, int b)
{
    int c;
    while (b != 0){
        c = a % b;
        a= b;
        b = c;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> x >> y >> z;
    cout << GCD(GCD(x,y),z);
    return 0;
}
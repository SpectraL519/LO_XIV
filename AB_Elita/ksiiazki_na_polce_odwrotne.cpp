#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n, m, p = 0, s = 0, l;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> l;
        s += l;
        if (s > m){
            s = l;
            p++;
        }
    }
    cout << p;
    return 0;
}
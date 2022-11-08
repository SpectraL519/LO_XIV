#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    cout << a[0];
    for (int i = 1; i < a.size(); i++){
        if (a[i] != a[i-1])     cout << a[i];
    }
    return 0;
}
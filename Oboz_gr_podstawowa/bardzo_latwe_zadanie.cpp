#include <iostream>
using namespace std;
int main()
{
    int n, m, k, l;
    k = 1;
    l = 0;
    cin >> n;
    m = n;
    while (n> 0)
    {
        n /= 10;
        m = n;
        m = m / 10 * 10;
        l = l + (n - m) * k;
        n /= 10;
        k *= 10;
    }
    cout << l;
    return 0;
}
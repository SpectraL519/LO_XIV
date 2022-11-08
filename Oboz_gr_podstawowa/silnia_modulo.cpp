#include <iostream>
using namespace std;
int main ()
{
    int n, x;
    cin >> n;
    cin >> x;
    if (n >= x)
    {
        cout << 0;
    }
    else
    {
    while (n > 0)
    {
        x = x * n;
        n--;
    }
    cout << x;
    }
    return 0;
}
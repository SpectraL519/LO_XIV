#include <iostream>
using namespace std;
int main ()
{
    int n, x;
    cin >> n;
    x = 1;
    if (n >= 5)
    {
        cout << 0;
    }
    else{
    while (n > 0)
    {
        x = x * n;
        n--;
    }
    cout << x % 10;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main ()
{
    int x, a, f;
    cin >> x;
    f = 1;
    a = 1;
    while (x - 1 > 0)
    {
        f = f + a;
        a++;
        x--;
    }
    cout << f;
}
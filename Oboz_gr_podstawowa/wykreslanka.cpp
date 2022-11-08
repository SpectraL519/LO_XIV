#include <iostream>
using namespace std;
int main ()
{
    int n, k, x, y;
    cin >> n >> k;
    x = 1;
    y = n;
    if (k % 2 == 0)
    {
        for (k; k > 0; k = k - 2)
        {
            cout << x << " " << y << " ";
            x++;
            y--;
        }
    }
    else
    {
        for (k; k > 1; k = k - 2)
        {
            cout << x << " " << y << " ";
            x++;
            y--;
        }
        cout << x;
    }
    return 0;
}
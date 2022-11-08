#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a, k, y;
    cin >> a;
    k = 0;
    y = sqrt(a);
    for (int i = 1; i <= y; i++)
    {
        if (a % i ==0)
        {
            k++;
        }
    }
    if (((int)sqrt(a) * (int)sqrt(a)) == (int)a)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << 2 * k;
    }
    return 0;
}
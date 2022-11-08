#include <iostream>
using namespace std;
int main ()
{
    int x, a, b;
    cin >> x;
    a = 0;
    b = 5;
    if (x / b <= 0)
    {
        cout << a;
    }
    else
    {

        while (x / b > 0)
        {
            a = a + (x / b);
            b = b * 5;
        }
        cout << a;
    }
    return 0;
}
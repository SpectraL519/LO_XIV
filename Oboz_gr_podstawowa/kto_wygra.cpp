#include <iostream>
using namespace std;
int main ()
{
    long long int x, y, z, a;
    cin >> x >> y >> z;
    a = x^y^z;
    if (a == 0)
    {
        cout << "Basia";
    }
    else if (a != 0)
    {
        cout << "Ania";
    }
    return 0;
}
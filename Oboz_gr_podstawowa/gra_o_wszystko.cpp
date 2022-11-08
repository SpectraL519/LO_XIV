#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    if (a % 5 ==  0 || a == 0)
    {
        cout << "TAK";
    }
    else
    {
        cout << "NIE";
    }
    return 0;
}
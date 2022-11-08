#include <iostream>
using namespace std;

int a, b, c, t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c;
        if (a >= b && a >= c){
            if (a*a == (b*b + c*c))     cout << "TAK\n";
            else    cout << "NIE\n";
        }
        else if (a <= b && b >= c){
            if (b*b == (a*a + c*c))     cout << "TAK\n";
            else    cout << "NIE\n";
        }
        else if (c >= b && a <= c){
            if (c*c == (b*b + a*a))     cout << "TAK\n";
            else    cout << "NIE\n";
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, n = 0;
    cin >> a >> b;
    bool p;
    for (int i = a; i <= b; i++){
        p = 1;
        if (i == 1)     p = 0;
        else{
            for (int j = 2; j <= sqrt(i); j++){
                if (i % j == 0)     p = 0;
            }
        if (p == 1)     n++;
        }
    }
    cout << n;
    return 0;
}
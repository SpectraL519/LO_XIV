#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

bool pierwszosc (int a)
{
    bool p = 1;
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
            p = 0;
            break;
        }
    }
    return p;
}
int main()
{
    int n;
    cin >> n;
    bool p = pierwszosc(n);
    if (p == 1)     cout << "pierwsza";
    else    cout << "zlozona";

    return 0;
}
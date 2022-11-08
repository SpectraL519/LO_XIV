#include <bits/stdc++.h>
using namespace std;

string a;
int x;
char z;

int main()
{
    while (cin >> a){
        for (int i = 0; i < 20; i += 2){
            x = a[i] - 'A';
            x += (a[i+1] - 'A') * 16;
            z = char(x);
            cout << z;
        }
        cout << "\n";
    }
    return 0;
}
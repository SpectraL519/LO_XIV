#include <iostream>
using namespace std;
int main()
{
    string a;
    char x, y;
    cin >> a;
    for (int i = 0; i < a.size(); i++){
        x = a[i];
        if ('a' <= x + 13 && x + 13 <= 'z'){
            y = x + 13;
            cout << y;
        }
        else{
            y = x - 13;
            cout << y;
        }
    }
    return 0;
}
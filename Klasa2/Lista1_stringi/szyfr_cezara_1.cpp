#include <iostream>
using namespace std;
int main()
{
    string a;
    int x;
    while (1){
        cin >> a;
        if (a == "!")   break;
        for (int i = 0; i < a.size(); i++){
            x = a[i] - 'a';
            x += 13;
            x %= 26;
            a[i] = x + 'a';
        }
        cout << a << "\n";
    }
    return 0;
}
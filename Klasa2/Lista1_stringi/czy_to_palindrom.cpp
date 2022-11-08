#include <iostream>
using namespace std;

void palindrom (int l, string a)
{
    bool pal = 1;
    for (int i = 0; i <= (l-1)/2; i++){
        if (a[i] != a[l-i-1]){
            pal = 0;
            break;
        }
    }
    if (pal == 1)   cout << "TAK" << "\n";
    else    cout << "NIE" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, l;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> l >> a;
        palindrom(l,a);
    }
    return 0;
}
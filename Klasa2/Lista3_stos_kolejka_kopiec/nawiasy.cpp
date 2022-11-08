#include <bits/stdc++.h>
using namespace std;

queue <int> Q;

string s;
int n, z, l;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> s;
    while (s[0] != '-'){
        z = 0;
        n = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '{') n++;
            else if (s[i] == '}'){
                if (n > 0)  n--;
                else{
                    z++;
                    n++;
                }
            }
        }
        z += n / 2;
        l++;
        cout << l << ". " << z << "\n";
        cin >> s;
    }
    return 0;
}
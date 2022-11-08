#include <iostream>
using namespace std;
int tab[100];
int t[100];
int liczba_liter = 0;
void zero()
{
    for (int i = 0; i < 100; i++){
        t[i] = 0;
    }
}
void litery (string x)
{
    int l = x.size();
    for (int i = 0; i < l; i++){
        t[x[i]-97]++;
    }
}
bool check (string a, string b)
{
    bool anagram = 1;
    if (a.size() != b.size())   anagram = 0;
    else{
        if (a != b){
            for (int i = 0; i < liczba_liter; i++){
                if (tab[i] != t[i]){
                    anagram = 0;
                    break;
                }
            }
        }
    }
    return anagram;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, licznik = 0;
    string a, b;
    cin >> a;
    int l = a.size();
    liczba_liter = l;
    for (int i = 0; i < l; i++){
        tab[a[i]-97]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> b;
        litery(b);
        if (check(a,b) == 1){
            cout << b << "\n";
        }
        zero();
    }
    return 0;
}
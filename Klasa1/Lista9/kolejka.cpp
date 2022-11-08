#include <iostream>
using namespace std;

int tab[100010];

int n, x, k = 0, p = 0, k2, p2, w = 0;
string a;

void funkcja()
{
    cin >> a;
    if (a == "PACJENT"){
        cin >> x;
        if (k < 100000){
            tab[k] = x;
            k++;
        }
        else{
            if (p == k){
                p = p2;
                k = k2;
                p2 = 0;
                k2 = 0;
                tab[k] = x;
                k++;
            }
            else{
                tab[k2] = x;
                k2++;
            }
        }
    }
    else if (a == "NASTEPNY!"){
        if (p < 100000){
            cout << tab[p] << "\n";
            p++;
        }
        else{
            if (p == k){
                p = p2;
                k = k2;
                p2 = 0;
                k2 = 0;
                cout << tab[p] << "\n";
                p++;
            }
            else{
                cout << tab[p2] << "\n";
                p2++;
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++){
        funkcja();
    }
    cout << "NIEPRZYJECI ";
    if (k != p){
        w += k - p;
    }
    else    w += 0;
    if (k2 != p2){
        w += k2 - p2;
    }
    else    w += 0;
    cout << w;
    return 0;
}
#include <iostream>
using namespace std;
int main ()
{
    string a;
    int k, l;
    cin >> k;
    for (k; k > 0; k--)
    {
        cin >> l;
        cin >> a;
        int takiesame = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != a[a.size() - i - 1])
            {
                takiesame = 0;
            }
        }
        if (takiesame == 1)
        {
            cout << "TAK\n";
        }
        else
        {
            cout << "NIE\n";
        }
    }
    return 0;
}
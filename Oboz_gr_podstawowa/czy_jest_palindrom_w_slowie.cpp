#include <iostream>
using namespace std;
int main()
{
    int t, l;
    string a;
    cin >> t;
    bool palindrom;
    for (t; t > 0; t--)
    {
        palindrom = 0;
        cin >> l;
        cin >> a;
        for (int i = 0; i + 1 < a.size(); i++)
        {
            if (a[i] == a[i+1])
            {
                palindrom = 1;
            }
            else if (a[i] == a[i + 2])
            {
                palindrom = 1;
            }

        }
        if (palindrom == 1)
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
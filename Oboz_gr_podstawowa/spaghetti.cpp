#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int liczba, t;
    cin >> t;
    for(t; t > 0; t--)
    {
        cin >> liczba;
        bool pierwszosc = 1;
        for (int i = 2; i*i <= liczba; i++)
        {
            if (liczba%i==0)
            {
                pierwszosc = 0;
            }
        }
        if (pierwszosc == 1)
        {
            cout << "NIE\n";
        }
        else
        {
            cout << "TAK\n";
        }
    }
    return 0;
}
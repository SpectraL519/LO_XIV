#include <iostream>
using namespace std;
int tab[1000][1000];
int t[1000][1000];
int main()
{
    int n, k, s;
    s = -2000000000;
    cin >> n;
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tab[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[i][j] = tab[j][i];
            //cout << t[i][j] << " ";
        }
        //cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = 0; j < n; j++)
        {
            x += t[i][j];
        }
        if (x > s)
        {
            s = x;
            k = i;
        }
    }
    cout << k;
    return 0;
}
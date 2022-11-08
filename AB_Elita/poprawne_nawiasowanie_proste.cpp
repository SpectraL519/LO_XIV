#include <iostream>
using namespace std;
int tab[100010];
int main ()
{
    int n, a = 0, b = 0;
    cin >> n;
    int k = n;
    char x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == '(')   {a++; tab[i] = 0;}
        else if (x == ')')  {b++; tab[i] = 1;}
    }
    if (tab[0] == 0 && tab[n-1] == 1 && a == b)    cout << "TAK";
    else    cout << "NIE";
    return 0;

    /* Alternatywny sposob - sciezka Dyke'a
    int number_of_parentheses;
    int dyke = 0;
    char parenthesis;
    bool correct = true;

    cin >> number_of_parentheses;
    for (int i = 0; i < number_of_parentheses; i++) {
        cin >> parenthesis;
        if (parenthesis == '(') { dyke++; }
        else    { dyke--; }

        if (dyke < 0)   { correct = falsse; }
    }

    if (correct)    { cout << "TAK"; }
    else    { cout << "NIE"; }
    */
}
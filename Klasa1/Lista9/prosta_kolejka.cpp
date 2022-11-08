#include <iostream>
#include <deque>
using namespace std;

deque <int> kolejka;

int n, x;
string komenda;

void program()
{
    cin >> komenda;
    if (komenda == "push"){
        cin >> x;
        kolejka.push_back(x);
    }
    else if (komenda == "pop"){
        if (kolejka.empty() == false){
            kolejka.pop_front();
        }
    }
    else if (komenda == "top"){
        if (kolejka.empty() == false){
            cout << kolejka.front() << "\n";
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++){
        program();
    }
    cout << "all done";
    return 0;
}
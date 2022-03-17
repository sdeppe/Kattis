#include <iostream>

using namespace std;

int main()
{
    int one, two;
    cin >> one >> two;

    if(one > 0 && two > 0)
    {
        cout << "1";
    }
    else if (one > 0 && two < 0)
    {
        cout << "4";
    }
    else if (one < 0 && two < 0)
    {
        cout << "3";
    }
    else 
    {
        cout << "2";
    }
    return 0;
}
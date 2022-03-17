#include <iostream>

using namespace std;

int main()
{
    int num, temp;
    cin >> num;
    for (int i=0; i<num; i++)
    {
        cin >> temp;
        if (temp%2 == 0)
        {
            cout << temp << " is even" << endl;
        }
        else 
        {
            cout << temp << " is odd" << endl;
        }
    }
    
    return 0;
}
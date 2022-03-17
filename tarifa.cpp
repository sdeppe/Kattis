#include <iostream>

using namespace std;

int main() 
{
    int x, p, temp = 0, u = 0;
    cin >> x >> p;
    
    for (int i=0; i<p; i++) 
    {
        cin >> temp;
        u += temp;
    }
    
    cout << x * (p+1) - u;
}
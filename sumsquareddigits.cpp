#include <iostream>
using namespace  std;
int main() 
{
  int run, one, two, three, sum, sq;
  cin >> run;
  for (int i=1; i<=run; i++)
  {
    sum = 0;
    cin >> one >> two >> three;
    while (three > 0)
    {
      sq = three % two;
      sum += sq * sq;
      three = (three - sq) / two;
    }
    cout << i << " " << sum << endl;
  }
}
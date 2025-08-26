#include <iostream>
using namespace std;

void Square(int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Please enter the no. of rows: ";
  cin >> n;
  Square(n);
  return 0;
}
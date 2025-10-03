#include <iostream>
using namespace std;

int palindromNum(int n)
{
    int revNum = 0, num = n;
    while (n != 0)
    {
        int dig = n % 10;
        revNum = revNum * 10 + dig;
        n /= 10;
    }
    return (num == revNum);
}
int main()
{
    cout << palindromNum(353) << endl;
    return 0;
}
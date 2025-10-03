#include <iostream>
using namespace std;

string isArmstrong(int n)
{
    int num = n;
    int sumOfCubes = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumOfCubes += (digit * digit * digit);
        n /= 10;
    }
    if (num == sumOfCubes)
        return "Is Armstrong.";
    return "Not Armstrong.";
}
int main()
{
    int n = 371;
    cout << isArmstrong(n) << endl;
    return 0;
}
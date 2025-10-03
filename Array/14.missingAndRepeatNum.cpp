#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
pair<int, int> missingRepeating(vector<vector<int>> &arr)
{
    int n = arr.size();
    int expSum = 0, actSum = 0, a, b;
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actSum += arr[i][j];

            if (s.find(arr[i][j]) != s.end())
                a = arr[i][j];
            s.insert(arr[i][j]);
        }
    }
    expSum = (n * n) * (n * n + 1) / 2;
    b = expSum + a - actSum;
    return {a, b};
}
int main()
{
    vector<vector<int>> arr = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}}; // nxn matrix
    pair<int, int> res = missingRepeating(arr);
    cout << "Repeated Value is: " << res.first << " and Missing Value is: " << res.second << endl;
    return 0;
}
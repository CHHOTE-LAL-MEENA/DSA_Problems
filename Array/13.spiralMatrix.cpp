#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();
    int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;
    vector<int> ans;
    while (srow <= erow && scol <= ecol)
    {
        // top row
        for (int j = scol; j <= ecol; j++)
            ans.push_back(mat[srow][j]);

        // right col
        for (int i = srow + 1; i <= erow; i++)
            ans.push_back(mat[i][ecol]);

        // bottom row
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
                break;
            ans.push_back(mat[erow][j]);
        }

        // left col
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
                break;
            ans.push_back(mat[i][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    vector<int> ans = spiralMatrix(mat);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
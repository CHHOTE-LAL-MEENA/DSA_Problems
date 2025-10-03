// if the row are sorted in the ascending order and the last element of the each row is less then to the next row first element.

#include <iostream>
#include <vector>
using namespace std;

bool searchInRow(vector<vector<int>> &mat, int ele, int row)
{
    int st = 0, end = mat[row].size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mat[row][mid] == ele)
            return true;
        if (mat[row][mid] < ele)
            st = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

bool searchEleIn2DArr(vector<vector<int>> &mat, int ele)
{
    int m = mat.size(), n = mat[0].size();
    int sRow = 0, eRow = m - 1;
    while (sRow <= eRow)
    {
        int midRow = sRow + (eRow - sRow) / 2;
        if (mat[midRow][0] <= ele && mat[midRow][n - 1] >= ele)
        {
            // found the row => BS on this row
            return searchInRow(mat, ele, midRow);
        }
        else if (mat[midRow][n - 1] < ele)
        {
            // found down => right
            sRow = midRow + 1;
        }
        else
        {
            // found in top => left side
            eRow = midRow - 1;
        }
    }
    return false;
}

// If all the elements of the rows and columns are sorted in the ascending order.
bool searchMatrix(vector<vector<int>> &mat, int ele)
{
    int m = mat.size(), n = mat[0].size();
    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (mat[r][c] == ele)
            return true;
        else if (ele < mat[r][c])
            c--;
        else
            r++;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << searchEleIn2DArr(matrix, 5) << endl;

    vector<vector<int>> mat = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    cout << searchMatrix(mat, 30);

    return 0;
}
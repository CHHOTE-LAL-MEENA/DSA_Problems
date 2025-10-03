#include <iostream>
#include <vector>
using namespace std;

void printMatrix(int rows, int cols)
{
    int mat[4][3];
    for (int i = 0; i < rows; i++) // Input values for the 2D array.
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) // Print the values of the 2D array.
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// Linear search into the 2D matrix array.

pair<int, int> linearSearch(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
                return {i, j};
        }
    }
    return {-1, -1};
}

// To calculate the maximun row sum into a 2D matrix array.
int maxRowSum(int mat[][3], int rows, int cols)
{
    int maxSum = INT32_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowSumI = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSumI += mat[i][j];
        }
        maxSum = max(maxSum, rowSumI);
    }
    return maxSum;
}

// To calculate the maximun col sum into a 2D matrix array.
int maxColSum(int mat[][3], int rows, int cols)
{
    int maxSum = INT32_MIN;
    for (int i = 0; i < cols; i++)
    {
        int colSumI = 0;
        for (int j = 0; j < rows; j++)
        {
            colSumI += mat[j][i];
        }
        maxSum = max(maxSum, colSumI);
    }
    return maxSum;
}

// Diagonals sum of matrix or 2D array.
int diagonalSum(int mat[][3], int n)
{
    int diaSum = 0;
    for (int i = 0; i < n; i++) // Now the optimized time complexity is O(n)
    {
        diaSum += mat[i][i];
        if (i != n - i - 1)
            diaSum += mat[i][n - i - 1];

        // for (int j = 0; j < n; j++)
        // {
        //     if (i == j)
        //         diaSum += mat[i][j];
        //     else if (j == n - i - 1)
        //         diaSum += mat[i][j];
        // }
    }
    return diaSum;
}

void printVector(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    // printMatrix(rows, cols);
    pair<int, int> res = linearSearch(matrix, rows, cols, 2);
    cout << res.first << "," << res.second << endl;
    cout << "Max row sum is: " << maxRowSum(matrix, rows, cols) << endl;
    cout << "Max col sum is: " << maxColSum(matrix, rows, cols) << endl;
    cout << "Diagonals sum is: " << diagonalSum(matrix, 3) << endl;

    // 2D vectors
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // 3X3 matrix
    printVector(mat);

    return 0;
}
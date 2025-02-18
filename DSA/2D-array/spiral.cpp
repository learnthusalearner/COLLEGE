// C++ program to perform spiral order
// traversal of a matrixrix
#include <iostream>
#include <vector>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int>> matrix)
{
    int row = matrix.size();
    int colomn = matrix[0].size();

    vector<int> res;

    // Initialize boundaries
    int top = 0, bottom = row - 1, left = 0, right = colomn - 1;

    // Iterate until all elements are printed
    while (top <= bottom && left <= right)
    {
        // Print top row from left to right
        for (int i = left; i <= right; i++)
        {
            res.push_back(matrix[top][i]);
        }
        top++;// Move to the next row

        // Print right column from top to bottom
        for (int i = top; i <= bottom; i++)
        {
            res.push_back(matrix[i][right]);
        }
        right--;// Move to the previous column

        // Print bottom row from right to left (if exists)
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                res.push_back(matrix[bottom][i]);
            }
            bottom--;// Move to the previous row
        }

        // Print left column from bottom to top (if exists)
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                res.push_back(matrix[i][left]);
            }
            left++;// Move to the next column
        }
    }

    return res;
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};

    vector<int> res = spirallyTraverse(matrix);
    for (int element : res)
        cout << element << " ";
    return 0;
}

/*
Initialization:
row = 4, colomn = 4

top = 0, bottom = 3, left = 0, right = 3

res = []

Iteration 1:
Top row (left to right):

Traverse from left = 0 to right = 3.

Add elements: 1, 2, 3, 4 to res.

Update top = 1.

res = [1, 2, 3, 4]
Right column (top to bottom):

Traverse from top = 1 to bottom = 3.

Add elements: 8, 12, 16 to res.

Update right = 2.

res = [1, 2, 3, 4, 8, 12, 16]
Bottom row (right to left):

Check if top <= bottom (1 <= 3): Yes.

Traverse from right = 2 to left = 0.

Add elements: 15, 14, 13 to res.

Update bottom = 2.

Copy
res = [1, 2, 3, 4, 8, 12, 16, 15, 14, 13]
Left column (bottom to top):

Check if left <= right (0 <= 2): Yes.

Traverse from bottom = 2 to top = 1.

Add elements: 9, 5 to res.

Update left = 1.

Copy
res = [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5]
Iteration 2:
Top row (left to right):

Traverse from left = 1 to right = 2.

Add elements: 6, 7 to res.

Update top = 2.

Copy
res = [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7]
Right column (top to bottom):

Traverse from top = 2 to bottom = 2.

Add element: 11 to res.

Update right = 1.

Copy
res = [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11]
Bottom row (right to left):

Check if top <= bottom (2 <= 2): Yes.

Traverse from right = 1 to left = 1.

Add element: 10 to res.

Update bottom = 1.

Copy
res = [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
Left column (bottom to top):

Check if left <= right (1 <= 1): Yes.

Traverse from bottom = 1 to top = 2.

No elements to add (since bottom < top after update).

Update left = 2.

Termination:
The loop condition top <= bottom && left <= right is now false (top = 2, bottom = 1, left = 2, right = 1).

The loop terminates.

Final Result:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/
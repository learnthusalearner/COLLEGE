#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int rows = matrix.size();//rows=5
    int cols = matrix[0].size();//cols=5

    int row = 0;
    int col = cols - 1;//col=4

    while (row < rows && col >= 0) {//0<5 && 4>=0
        if (matrix[row][col] == target) {//matrix[0][4]=15 !=5 F
            return true;
        } else if (matrix[row][col] > target) {//matrix[0][4]=15 > 5
            col--;//because this is sorted matrix that's why we are moving left side
        } else {
            row++;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;

    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    }
}
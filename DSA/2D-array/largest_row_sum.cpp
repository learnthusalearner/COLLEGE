#include <iostream>
using namespace std;

void row_wise_sum_and_largest(int arr[3][4])
{
    int rowSum[3] = {0}; // Array to store the sum of each row
    int largestSum = 0;  // Variable to store the largest row sum
    int largestRowIndex = 0; // Variable to store the index of the row with the largest sum

    // Calculate the sum of each row
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
        rowSum[i] = sum; // Store the sum of the current row
        cout << "Sum of row " << i << ": " << sum << endl;

        // Track the largest sum and its row index
        if (sum > largestSum)
        {
            largestSum = sum;
            largestRowIndex = i;
        }
    }

    // Print the row with the largest sum
    cout << "The largest sum is " << largestSum << " at row " << largestRowIndex << endl;
}

int main()
{
    int arr[3][4];

    // Input the matrix
    cout << "Enter the elements of the 3x4 matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }   

    // Call the function
    row_wise_sum_and_largest(arr);

    return 0;
}
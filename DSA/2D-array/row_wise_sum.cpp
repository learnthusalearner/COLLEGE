#include <iostream>
using namespace std;

void row_wise_sum(int arr[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of row " << i << ": " << sum << endl;
    }
}

int main()
{
    int arr[3][4];

    // taking input
    cout << "Enter the elements of 3x4 matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    row_wise_sum(arr);
} 
//book allocation problem with 3 statements are given below: 
// 1. atleast one book should be allocated to each student 
// 2. the number of pages allocated to each student should be contiguous 
// 3. the number of pages allocated to each student should be minimum

#include <iostream>
#include <vector>
using namespace std;

int countStudents(vector<int> &arr, int maxPages)
{
    int students = 1;
    int currentPages = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (currentPages + arr[i] > maxPages)
        {
            students++;
            currentPages = arr[i];
        }
        else
        {
            currentPages = currentPages + arr[i];
        }
    }
    return students;
}

int findPages(vector<int> &arr, int numStudents, int numBooks)
{
    int low = 0;
    int sum = 0;
    for (int i = 0; i < numBooks; i++)
    {
        sum = sum + arr[i];
    }
    int high = sum;
    
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int students = countStudents(arr, mid);
        if (students > numStudents)//If the number of students required is greater than the given numStudents, it means the current mid value is too low thus we need to increase the mid value.
        {
            low = mid + 1;
        }
        else//if the number of students required is less than or equal to numStudents, it means the current mid value might be a potential answer.
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int numStudents = 2;
    int numBooks = arr.size();
    int result = findPages(arr, numStudents, numBooks);
    cout << "Minimum number of pages = " << result << endl;
    return 0;
}
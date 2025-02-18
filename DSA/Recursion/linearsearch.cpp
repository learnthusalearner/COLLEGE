
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int elem, int size)
{
    if (size == 0)
        return false;
    if (arr[0] == elem)
        return true;
    else
    {
        bool ans=linearSearch(arr+1,elem,size-1);
        return ans;
    }
}

int main()
{
    int arr[] = {6, 2, 3, 4, 5, 6, 7};
    int elem = 6;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = linearSearch(arr, elem, size);
    cout << ans << endl;
}
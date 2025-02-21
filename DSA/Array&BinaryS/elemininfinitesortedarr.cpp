#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
  while (low <= high)
  {

    int mid = (low + high) / 2;
    if (arr[mid] < key)
    {
      low = mid + 1;
    }
    else if (arr[mid] > key)
    {
      high = mid - 1;
    }
    else
    {
      return mid;
    }
  }
}

int findIndex(int arr[], int key)
{
  int low = 0;
  int high = 1;
  while (arr[high] < key)
  {
    low = high;
    high = high * 2; // 1 2 4 8 will cover larger area faster
  }
  return binarySearch(arr, low, high, key);
  //yaha pe agar low 0 ha next wo dekh raha agar elem 1st index se zyada ha ki nahi joki hoga he 1st itr ma tab wo high ma low ki value daldega oor high ko 2x kardega then agar hua wo elem to theek warna phir wo 2x se 4x aaage hoga oor low bhe uske just peecha hoga jaldi jaldi hoga issse 
}

int main()
{
  int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};

  int ans = findIndex(arr, 130);

  cout << "Element found at index " << ans;

  return 0;
}
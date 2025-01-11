#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    vector<int> res;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                auto it = find(res.begin(), res.end(), arr[i]);
                if (it == res.end()) {//if not found then ret res.end()
                    res.push_back(arr[i]);
                }
                break; 
            }
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {12, 11, 40, 12, 5, 6, 5, 12, 11,};
    vector<int> duplicates = findDuplicates(arr);
    for (int i = 0; i < duplicates.size(); i++)
        cout << duplicates[i] << " ";    
    return 0;
}
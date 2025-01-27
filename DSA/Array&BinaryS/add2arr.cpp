#include <iostream>
#include <vector>
using namespace std;

vector<int> add2arr(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int size = min(n, m); // we only iterate up to the smaller arr size
    vector<int> result(size);

    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 4};

    vector<int> result = add2arr(arr1, arr2);

    cout << "Resultant array after adding: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
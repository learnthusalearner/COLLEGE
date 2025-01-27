#include <bits/stdc++.h>
using namespace std;

int countPainters(vector<int> &boards, int time) {
    int painters = 1; //atleast one painter is required according to the problem statement
    int boardsPainter = 0;//initially no boards are painted

    for (int i = 0; i < boards.size(); i++) {
        if (boardsPainter + boards[i] > time) {
            painters++;
            boardsPainter = boards[i];
        } else {
            boardsPainter = boardsPainter + boards[i];
        }
    }
    return painters;
}

int findLargestMinDistance(vector<int> &boards, int numPainters) {
    int low = 0;
    int sum = 0;

    for (int i = 0; i < boards.size(); i++) {
        sum = sum + boards[i];
    }

    int high = sum;

    while (low <= high) {
        int mid = (low + high) / 2;
        int painters = countPainters(boards, mid);

        if (painters > numPainters) {
            low = mid + 1;//the current mid value is too small to allocate to the painters thus we need to increase the mid value to get the minimum value 
        } else {
            high = mid - 1;//the current mid value is too large to allocate to the painters thus we need to decrease the mid value to get the minimum value
        }
    }

    return low;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int numPainters = 2;
    int ans = findLargestMinDistance(boards, numPainters);

    cout << "The answer is: " << ans << "\n";
    return 0;
}

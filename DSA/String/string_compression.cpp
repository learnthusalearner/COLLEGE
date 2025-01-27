#include <bits/stdc++.h>
using namespace std;

    int compress(vector<char>& chars) {

        if(chars.size() < 2){
            return chars.size();
        }

        vector<char> ans;

        int i = 0;
        int j = i;

        while(i < chars.size()) {

            while(j < chars.size() && chars[i] == chars[j]){
                j++;
            }
            
            ans.push_back(chars[i]); 

            int len = j - i;

            if(len > 1){
                string num = to_string(len);
                for (char c : num) {
                    ans.push_back(c);
                }
            }

            i = j;
        }

        chars = ans;
        
        return ans.size();
    }
int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int new_length = compress(chars);

    cout << "Compressed string: ";
    for (int i = 0; i < new_length; ++i) {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
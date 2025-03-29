#include <bits/stdc++.h>
using namespace std;
class Solution {
    private:
        void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
            //base case matlab exclude include karte karte last lvl tak pahuch gye ho us line ka
            if(index >= nums.size()) {
                ans.push_back(output);
                return ;
            }
            
            //exclude matlab kuch add he nahi hoga to hamlog index ko aaage le ja rhe ha
            solve(nums, output, index+1, ans);
            
            //include ma index ko aage le ja rhe ha + jo bhe element pe the usko add karna ha 
            int element = nums[index];
            output.push_back(element);
            solve(nums, output, index+1, ans);
            
        }
        
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            
            vector<vector<int> > ans;
            vector<int> output;
            int index = 0;
            solve(nums, output, index, ans);
            return ans;
            
        }
    };
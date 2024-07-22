//bruteforce would be simply use two arrays and another solution would be two pointer approach, 
//but we'll have to sort the array first and hence this solution below is most optimal.
//T.C.= O(N) Sc=O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> mpp;
            for (int i = 0; i < nums.size(); i++) {
                int num = nums[i];
                int moreNeeded = target - num;
                if (mpp.find(moreNeeded) != mpp.end()) {
                    return {mpp[moreNeeded], i};
                }
                mpp[num] = i;
            }
            return { -1, -1};
            }
};
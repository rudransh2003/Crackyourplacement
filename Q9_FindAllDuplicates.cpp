//b.f would be to sort and return indices
//this solution has O(N) T.C.
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> elementCount;
        vector<int> duplicates;

        // Count frequencies of each element
        for (auto i : nums) {
            elementCount[i]++;
        }

        // Collect elements with frequency > 1 (i.e., duplicates)
        for (auto i : elementCount) {
            if (i.second > 1) {
                duplicates.push_back(i.first);
            }
        }

        return duplicates;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;

        unordered_map<int, int> storeIdx;

        for(int i=0; i<n; i++) {
            if(storeIdx.find(target - nums[i]) != storeIdx.end()) {
                ans.push_back(storeIdx[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }

            storeIdx[nums[i]] = i;
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int, int> mp;
        vector<int> ans;

        for(int i=0; i<n; i++) {
            int remaining = target - nums[i];

            if(mp.find(remaining) != mp.end()) {
                int j = mp[remaining];

                ans.push_back(min(i, j));
                ans.push_back(max(i, j));
                return ans;
            }   else {
                mp[nums[i]] = i;
            }
        }

        return ans;
    }
};

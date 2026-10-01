class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int val : nums) {
            if(mp.find(val) != mp.end()) {
                return true;
            } else {
                mp[val] = 1;
            }
        }

        return false;
    }
};
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++) {
            int curr = nums[i];

            for(int j=0; j<n; j++) {
                if(nums[j] == curr && i != j) {
                    return true;
                }
            }
        }

        return false;
    }
};
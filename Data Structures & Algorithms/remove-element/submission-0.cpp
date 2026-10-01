class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        vector<int> ans;
        int count = 0;

        for(int i=0; i<n; i++) {

            if(nums[i] != val) {
                ans.push_back(nums[i]);
                count++;
            }
        }

        for(int i=0; i< ans.size(); i++) {
            nums[i] = ans[i];
        }

        for(int i=ans.size(); i<n; i++) {
            nums[i] = val;
        }

        return count;
    }
};
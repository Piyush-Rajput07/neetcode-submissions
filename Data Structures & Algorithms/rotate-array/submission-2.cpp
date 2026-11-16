class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k %= n;

        vector<int> ans(n);
        int idx = n-k;

        for(int i=0; i<k; i++) {
            ans[i] = nums[idx];
            idx++;
        }

        idx = 0;
        for(int i=k; i<n; i++) {
            ans[i] = nums[idx];
            idx++;
        }

        for(int i=0; i<n; i++) {
            nums[i] = ans[i];
        }
    }
};
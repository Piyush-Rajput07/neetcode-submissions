class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1, 0);

        for(int val : nums) {
            if(val > 0 && val <= n) {
                freq[val]++;
            }
        }

        for(int i=1; i<=n; i++) {
            if(freq[i] == 0) {
                return i;
            }
        }

        return n+1;
    }
};
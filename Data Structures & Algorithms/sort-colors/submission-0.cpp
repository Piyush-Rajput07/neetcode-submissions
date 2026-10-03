class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int num : nums) {
            mp[num]++;
        }

        int minE = *min_element(nums.begin(), nums.end());
        int maxE = *max_element(nums.begin(), nums.end());

        int idx = 0;

        for(int i = minE; i <= maxE; i++) {
            while(mp[i] > 0) {
                nums[idx] = i;
                idx++;
                mp[i]--;
            }
        }
    }
};
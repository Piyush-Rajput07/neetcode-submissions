class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;

        for(int i=0; i<n; i++) {

            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int target = -nums[i];
            int left = i + 1, right = n - 1;

            while(left < right) {
                if(nums[left] + nums[right] == target) {
                    triplets.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left-1]) {
                        left++;
                    }

                    while(left < right && nums[right] == nums[right+1]) {
                        right--;
                    }
                } else if(nums[left] + nums[right] < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return triplets;
    }
};

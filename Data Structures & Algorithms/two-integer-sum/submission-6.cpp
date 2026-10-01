class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<pair<int, int>> vec;

        for(int i=0; i<n; i++) {
            vec.push_back({nums[i], i});
        }

        sort(vec.begin(), vec.end());
        
        int st = 0, end = n - 1;
        vector<int> ans;

        while(st < end) {
            int sum = vec[st].first + vec[end].first;

            if(sum == target) {
                int i = vec[st].second;
                int j = vec[end].second;
                
                ans.push_back(min(i, j));
                ans.push_back(max(i, j));
                return ans;
            }   else if (sum < target) {
                st++;
            }   else {
                end--;
            }
        }

        return ans;
    }
};

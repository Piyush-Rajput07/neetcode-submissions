class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mp;

        for(int num : nums) {
            mp[num]++;
        }

        vector<vector<int>> vec(n+1);

        for(auto it : mp) {
            int element = it.first;
            int freq = it.second;

            vec[freq].push_back(element);
        }

        vector<int> res;

        for(int i = n; i >= 0; i--) {

            if(vec[i].size() == 0) {
                continue;
            }

            while(vec[i].size() > 0 && k > 0) {
                res.push_back(vec[i].back());
                vec[i].pop_back();
                k--;
            }
        }

        return res;
    }
};

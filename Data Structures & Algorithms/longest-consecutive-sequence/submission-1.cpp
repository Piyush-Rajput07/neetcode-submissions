class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        if(nums.size() == 0) {
            return 0;
        }

        for(int num : nums) {
            st.insert(num);
        }

        int maxLen = 1;

        for(int num : st) {

            if(st.find(num-1) == st.end()) {
                int currLen = 1;
                int target = num + 1;

                while(st.find(target) != st.end()) {
                    currLen++;
                    target++;
                }

                maxLen = max(currLen, maxLen);
            }
        }

        return maxLen;
    }
};

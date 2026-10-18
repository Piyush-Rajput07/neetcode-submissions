class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> ans(m+n);
        int idx = 0;

        int i = 0, j = 0;

        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                ans[idx++] = nums1[i++];
            } else {
                ans[idx++] = nums2[j++];
            }
        }

        while(i < m) {
            ans[idx++] = nums1[i++];
        }

        while(j < n) {
            ans[idx++] = nums2[j++];
        }

        for(int i=0; i<ans.size(); i++) {
            nums1[i] = ans[i];
        }
    }
};
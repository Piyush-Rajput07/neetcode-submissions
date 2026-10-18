class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;

        for(int scan = 1; scan < nums.size(); scan++) {
            if(nums[scan] != nums[unique]) {
                unique++;
                swap(nums[scan], nums[unique]);
            }
        }

        return unique+1;
    }
};
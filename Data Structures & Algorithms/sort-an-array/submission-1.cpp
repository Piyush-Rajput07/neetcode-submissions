class Solution {
public:
    void merge(vector<int>& nums, int st, int mid, int end) {
        vector<int> temp;

        int i = st, j = mid + 1;

        while(i <= mid && j <= end) {
            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        //left
        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        //right
        while(j <= end) {
            temp.push_back(nums[j]);
            j++;
        }

        //making the changes in actual vector

        for(int i=0; i<temp.size(); i++) {
            nums[st + i] = temp[i];
        }

    }
    void mergeSort(vector<int>& nums, int st, int end) {
        if(st < end) {
            int mid = st + (end-st)/2;

            //left 
            mergeSort(nums, st, mid);

            //right
            mergeSort(nums, mid+1, end);

            merge(nums, st, mid, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxWater = 0;

        int i = 0, j = n-1;

        while(i < j) {
            int hgt = min(heights[i], heights[j]);
            int wth = j - i;

            int currWater = hgt * wth;
            maxWater = max(currWater, maxWater);

            if(heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxWater;
    }
};

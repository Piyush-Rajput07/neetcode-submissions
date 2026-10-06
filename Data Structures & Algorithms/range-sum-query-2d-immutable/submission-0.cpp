class NumMatrix {
public:
    void rangeSumQuery2D(vector<vector<int>>& matrix, int m, int n) {
        if(matrix.size() == 0 || matrix[0].size() == 0) {
            return;
        }

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                int top = (i > 0) ? prefixSum[i-1][j] : 0;
                int left = (j > 0) ? prefixSum[i][j-1] : 0;
                int topLeft = (i > 0 && j > 0) ? prefixSum[i-1][j-1] : 0;

                prefixSum[i][j] = matrix[i][j] + top + left - topLeft;
            }
        }
    }
    vector<vector<int>> prefixSum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        prefixSum.resize(m, vector<int>(n));
        rangeSumQuery2D(matrix, m, n);
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = prefixSum[row2][col2];

        int top = (row1 > 0) ? prefixSum[row1 - 1][col2] : 0;
        int left = (col1 > 0) ? prefixSum[row2][col1 - 1] : 0;
        int topLeft = (row1 > 0 && col1 > 0) ? prefixSum[row1 - 1][col1 - 1] : 0;

        return total - top - left + topLeft;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
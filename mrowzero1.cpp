class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        if(m == 0) return;
        if(n == 0) return;
        
        bool hasZeroFirstRow = false;
        bool hasZeroFirstCol = false;
        
        
        for(int j=0; j<n; j++) {
            if(matrix[0][j] == 0){
                hasZeroFirstRow = true;
                break;
            }
        }
        // Does first column contains zero ?
        for(int j=0; j<m; j++) {
            if(matrix[j][0] == 0){
                hasZeroFirstCol = true;
                break;
            }
        }
        
        // make use of first row and col
        // find zero and store info into first row and col
        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        // set zeroes for first row
        if(hasZeroFirstRow) {
            for(int i=0; i<n; i++) {
                matrix[0][i] = 0;
            }
        }
        
        // set zeroes in first column
        if(hasZeroFirstCol) {
            for(int i=0; i<m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

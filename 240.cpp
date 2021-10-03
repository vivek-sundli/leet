class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        bool isFound= false;
        if(m==0 || n==0){
            return false;
        }
        int j=n-1;
        int i=0;
        while(i<m && j>=0){
            if(matrix[i][j] == target){
                isFound = true;
                break;
            }
            if(matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        
        return isFound;
    }
};

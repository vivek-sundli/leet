    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==0 || n==0){
            return false;
        }
        if(m==1){
            
        }
        bool isFound = false;
        int low=0;
        int high=m;
        int mid;
        int pivot;
        
        //last column binary search
        while(low<=high){
            mid = low+(high-low)/2;
            if(target==matrix[mid][n-1]){
                isFound==true;
                return isFound;
            }
            if(target > matrix[mid][n-1]){
                pivot=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        //row binary search
        pivot++;
        low=0;
        high=n;
        
        while(low <= high){
            
            mid=low + (high-low)/2;
            
            if(target == matrix[pivot][mid]){
                isFound=true;
                return isFound;
            }
            if(target > matrix[pivot][mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        return isFound;
    }
};

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        if(numRows == 0){
            return ans;
        }
        ans[0].push_back({1});
        
        for(int i=1;i<numRows;i++){
            for(int j=0;j<=i;j++){
                //for starting and ending index
                if(j==0 || i==j){
                    ans[i].push_back(1);
                    continue;
                }else{
                    ans[i].push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
            }
        }        
        return ans;
    }
};


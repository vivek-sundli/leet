class Solution {
public:
    
    void printEntire(vector<vector<int>> nums){
        for(auto i: nums){
            for(auto j: i){
                cout<<j<<",";
            }cout<<endl;
        }
    }
    
    void printRow(vector<int> nums){
        for(auto i: nums){
            cout<<i;
        }
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> row;
        int prev1,prev2;
        //for row 0
        row.push_back(1);
        ans.push_back(row);
        //from row 1
        row.push_back(1);
        ans.push_back(row);
        for(int i=1;i<numRows-1;i++){
            for(int j=0;j<i;j++){
                //for starting and ending index
                if(j==0 || i==j){
                    ans[i].push_back(1);
                    continue;
                }
                //prev 1; 
                    if((i-1)<0 && (j-1)<0){
                        prev1=0;
                    }else{
                        prev1=ans[i-1][j-1];
                    }
                //prev2;
                    if(j==i-1){
                        prev2=0;
                    }else{
                        prev2=ans[i-1][j];
                    }
                    row.push_back(prev1+prev2);
            }
            cout<<i<<": ";
            printRow(row);
            cout<<endl;
            ans.push_back(row);
            row.clear();
            printRow(row);
        }
        
        return ans;
    }
};

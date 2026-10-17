class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size(),m=matrix[0].size();
        int l=0,d=n-1,u=0,r=m-1;
        while(l<=r&&u<=d){
            for(int i=l;i<=r;i++){
                ans.push_back(matrix[u][i]);
            }
            u++;
            for(int j=u;j<=d;j++){
                ans.push_back(matrix[j][r]);
            }
            r--;
            if(u<=d){
                for(int k=r;k>=l;k--){
                    ans.push_back(matrix[d][k]);
                }
                d--;
            }
            if(l<=r){
                for(int i=d;i>=u;i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
        
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        ans[0]=0;
        int temp;
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0){
                ans[i]=1;
                temp=i;
            }
            else{
                ans[i]=1+ans[i-temp];

            }
        }
        return ans;


        
        
    }
    
};

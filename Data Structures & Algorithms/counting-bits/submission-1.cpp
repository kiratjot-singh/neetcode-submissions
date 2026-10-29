class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=count(i);
        }
        return ans;
        
        
    }
    int count(int n){
        int ans=0,i=0;
        while(i<32){
            if(1<<i&(n))ans++;
            i++;
        }
        return ans;
    }
};

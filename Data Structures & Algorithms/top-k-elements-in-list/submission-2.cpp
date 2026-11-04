class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;    
        }
        
        vector<vector<int>>vec(nums.size()+1);
        for(auto pair:freq){
            vec[pair.second].push_back(pair.first);
        }
        for(int i=nums.size();i>=0;i--){
            if(vec[i].size()!=0){
                
                while(vec[i].size()>0&&ans.size()<k){
                    ans.push_back(vec[i].back());
                    vec[i].pop_back();

                }
                
            }
        }
        return ans;

        
    }
};

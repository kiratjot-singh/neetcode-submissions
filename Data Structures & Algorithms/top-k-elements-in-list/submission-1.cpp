class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;    
        }
        
        priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        function<bool(pair<int,int>, pair<int,int>)>
        > pq(
        [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        }
        );

        
        
        for(auto pair:freq){
            if(pq.size()<k){
                pq.push({pair.first,pair.second});

            }
            else{
                if(pair.second>pq.top().second){
                    pq.pop();
                    pq.push({pair.first,pair.second});
                }
            }
            
        }
        while(!pq.empty()){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;

        
    }
};

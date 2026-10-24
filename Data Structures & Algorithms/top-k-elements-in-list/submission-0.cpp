class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;    
        }
        vector<pair<int,int>>p;
        for(auto pair:freq){
            p.push_back({pair.first,pair.second});
        }
        sort(p.begin(), p.end(),
            [](pair<int, int>& a, pair<int, int>& b) {
                return a.second > b.second;
            }
        );
        
        for(int i=0;i<k;i++){
            ans.push_back(p[i].first);
        }
        return ans;

        
    }
};

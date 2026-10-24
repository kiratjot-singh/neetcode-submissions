class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i]))return 1;
            mp[nums[i]]++;
        }
        return 0;
        
    }
};
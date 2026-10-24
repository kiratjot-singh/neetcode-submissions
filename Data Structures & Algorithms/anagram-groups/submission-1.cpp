class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        
        map<vector<int>,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            vector<int>arr(26);
            for(int j=0;j<strs[i].size();j++){
                arr[s[j]-'a']++;

            }
            m[arr].push_back(s);
            
        }
        for(auto pair:m){
            ans.push_back(pair.second);
        }
        return ans;
        
    }
};

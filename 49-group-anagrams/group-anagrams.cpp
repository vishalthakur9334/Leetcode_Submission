class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>result;
        for(int i=0;i<strs.size();i++){

            string pick=strs[i];
            sort(pick.begin(),pick.end());

            mp[pick].push_back(strs[i]);
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;

    }
};
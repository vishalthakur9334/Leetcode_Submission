class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;    //  count frequency of each elements
        }

        vector<pair<int,int>>mapping;  // make pair element and their frequency

        for(auto it:mp){
            mapping.push_back({it.first,it.second});
        }

        // sort according to the highest frequency of each element 

        sort(mapping.begin(),mapping.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second>b.second;
        });

        // fetch top k elements now in result;

        vector<int>result;

        for(int i=0;i<k;i++){
            result.push_back(mapping[i].first);
        }
        return result;
    }
};
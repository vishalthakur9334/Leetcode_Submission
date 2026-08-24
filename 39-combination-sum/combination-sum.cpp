class Solution {
public:
    void fun(vector<int>&candidates,int n,int idx,int sum,vector<vector<int>>&result,vector<int>&temp,int target){
        if(idx==n){
            if(sum==target){
                result.push_back(temp);
               
            }
             return ;
        }

        /// if do not want to take then move to next choices :)

        fun(candidates,n,idx+1,sum,result,temp,target);

        // if want to take 

        if(candidates[idx]+sum<=target){
            temp.push_back(candidates[idx]);

            sum+=candidates[idx];

            fun(candidates,n,idx,sum,result,temp,target);

            temp.pop_back();
            sum-=candidates[idx];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        int n=candidates.size();
        vector<int>temp;
        int sum=0;
        fun(candidates,n,0,sum,result,temp,target);
        return result;
    }
};
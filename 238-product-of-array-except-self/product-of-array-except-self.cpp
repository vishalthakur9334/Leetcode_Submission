class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        vector<int>result(n);
        
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]*nums[i-1];

            right[n-i-1]=right[n-i]*nums[n-i];
        }
        for(int i=0;i<nums.size();i++){
            result[i]=left[i]*right[i];
        }
        return result;
    }
};
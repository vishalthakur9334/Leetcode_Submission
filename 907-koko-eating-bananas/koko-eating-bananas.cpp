class Solution {
public:
    bool can_eat(vector<int>&piles,int mid,int h){
        long long hours=0;
        for(int i=0;i<piles.size();i++){
           hours += (piles[i] + mid - 1) / mid;
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int ans=-1;
        int right=*max_element(piles.begin(),piles.end());
        while(left<=right){
            int mid=left+(right-left)/2;

            if(can_eat(piles,mid,h)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};
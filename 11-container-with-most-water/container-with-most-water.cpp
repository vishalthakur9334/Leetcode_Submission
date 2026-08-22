class Solution {
public:  // two pointer approach : 
     // height increase karo if widht kam raha hai to ,,, area maximum rakhna hai 
    int maxArea(vector<int>& height) {
        int area=0;
        int maxarea=0;

        int left=0;
        int right=height.size()-1;

        while(left<right){
            int w=right-left;

            int h=min(height[left],height[right]);

            area=h*w;

            maxarea=max(maxarea,area);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};
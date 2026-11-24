class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=m*n-1;
        while(left<=right){
            int mid=left+(right-left)/2;

            int r=mid/n;
            int c=mid%n;

            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return false;
    }
};
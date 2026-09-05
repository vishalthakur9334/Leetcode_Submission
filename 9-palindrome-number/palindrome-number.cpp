class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        long long rev=0;
        while(x){
            int digit=x%10;
            rev=(rev*10+digit);
            x=x/10;
        }
        return n==rev;

    }
};
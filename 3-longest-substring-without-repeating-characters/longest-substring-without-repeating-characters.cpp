class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(128,0);
        int i=0;
        int j=0;
        int len=0;
        while(j<s.size()){
            while(count[s[j]]>0){
                count[s[i]]--;
                i++;
            }
            count[s[j]]++;
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};
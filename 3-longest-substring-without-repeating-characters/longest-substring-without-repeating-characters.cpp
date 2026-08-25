class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int i=0;
        int j=0;
        unordered_set<int>st;
        while(j<s.size()){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            len=max(len,(int)st.size());
            j++;
        }
        return len;
    }
};
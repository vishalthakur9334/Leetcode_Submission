class Solution {
public:
unordered_map<char, string> mp = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

    void fun(string &s,int n,int idx,vector<string>&result,string temp){
        if(idx==n){
            result.push_back(temp);
            return ;
        }

        // explore choices ....

        string choice=mp[s[idx]];
        for(int j=0;j<choice.size();j++){
            temp.push_back(choice[j]);
            fun(s,n,idx+1,result,temp);
            temp.pop_back();
        }
        return ;
    }
    vector<string> letterCombinations(string s) {
        vector<string>result;
        string temp;
        int n=s.size();
        int idx=0;
        fun(s,n,idx,result,temp);
        return result;
    }
};
class Solution {
public:
    bool boxes(vector<vector<char>>&board,int sr,int er,int sc,int ec){
        unordered_set<char>st;
        for(int i=sr;i<er;i++){
            for(int j=sc;j<ec;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(st.count(board[i][j])){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // validate rows: 

        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
               if(st.count(board[i][j])){
                return false;
               }
               st.insert(board[i][j]);
            }
        }

        // validate col :

        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                if(st.count(board[j][i])){
                    return false;
                }
                st.insert(board[j][i]);
            }
        }

        // validate 3*3 boxes ;

        for(int i=0;i<9;i+=3){
            int er=i+3;
            for(int j=0;j<9;j+=3){
                int ec=j+3;

                if(!boxes(board,i,er,j,ec)){
                    return false;
                }
            }
        }
        return true;
    }
};
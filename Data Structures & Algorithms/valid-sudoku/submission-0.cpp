class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //traverse row wise first
        for (int i=0; i<9; i++){
            map<char,int>freq;
            for (int j=0; j<board.size(); j++){
                if(board[i][j]!='.'){
                    freq[board[i][j]]++;

                    if(freq[board[i][j]]>1){
                        return false;
                    }
                }
            }
        }

        //trave column wise next
        for (int j=0; j<board[0].size(); j++){
            map<char,int>freq;
            for (int i=0; i<board.size(); i++){
                if(board[i][j]!='.'){
                    freq[board[i][j]]++;

                    if(freq[board[i][j]]>1){
                        return false;
                    }
                }
            }
        }

        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {

                map<char, int> freq;

                for (int i = boxRow; i < boxRow + 3; i++) {
                    for (int j = boxCol; j < boxCol + 3; j++) {

                        if (board[i][j] != '.') {
                            freq[board[i][j]]++;

                            if (freq[board[i][j]] > 1) {
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;

    }
};

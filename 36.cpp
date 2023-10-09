#include "LeetCodeBase.h"

bool isValidSudoku(vector<vector<char>>& board){
    // 行列宫
    vector<int> rows(9, 0);
    vector<int> cols(9, 0);
    vector<int> blocks(9, 0);

    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            if(board[i][j] != '.'){
                int num = board[i][j] - '0';
                if((rows[i] >> num) & 1){
                    return false;
                }
                rows[i] |= (1 << num);

                if((cols[j] >> num) & 1){
                    return false;
                }
                cols[j] |= (1 << num);

                int blockIdx = i / 3 + j / 3 * 3;
                if((blocks[blockIdx] >> num) & 1){
                    return false;
                }
                blocks[blockIdx] |= (1 << num);
            }
        }
    }

    return true;
}

int main(){
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    cout << (0 | (1 << 5)) << endl;
    cout << isValidSudoku(board) << endl;
    return 0;
}
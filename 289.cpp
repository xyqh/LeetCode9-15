#include "LeetCodeBase.h"

void gameOfLife(vector<vector<int>>& board){
    int m = board.size(), n = board[0].size();
    // (0死 1活) (2状态转变) (4存活状态)
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            int l = max(0, i - 1), r = min(m - 1, i + 1);
            int t = max(0, j - 1), b = min(n - 1, j + 1);
            int alive = 0;
            for(int i1 = l; i1 <= r; ++i1){
                for(int i2 = t; i2 <= b; ++i2){
                    if(i1 == i && i2 == j) continue;
                    alive += (board[i1][i2] & 1);
                }
            }
            if(board[i][j] % 2 == 0){
                // 死细胞
                if(alive == 3) board[i][j] |= (1 << 2);
            }else{
                // 活细胞
                if(alive < 2){

                }else if(alive <= 3){
                    board[i][j] |= (1 << 2);
                }
                else if(alive > 3){

                }
            }
        }
    }

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            board[i][j] >>= 2;
        }
    }
}
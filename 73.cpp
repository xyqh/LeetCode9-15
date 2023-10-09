#include "LeetCodeBase.h"

void setZeros(vector<vector<int>>& matrix){
    int flag_col0 = false, flag_row0 = false;
    int m = matrix.size(), n = matrix[0].size();
    for(int i = 0; i < m; ++i){
        if(matrix[i][0] == 0){
            flag_col0 = true;
        }
    }
    for(int i = 0; i < n; ++i){
        if(matrix[0][i] == 0){
            flag_row0 = true;
        }
    }

    for(int i = 1; i < m; ++i){
        for(int j = 1; j < n; ++j){
            if(matrix[i][j] == 0){
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < m; ++i){
        for(int j = 1; j < n; ++j){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    if(flag_col0){
        for(int i = 0; i < m; ++i){
            matrix[i][0] = 0;
        }
    }
    
    if(flag_row0){
        for(int i = 0; i < n; ++i){
            matrix[0][i] = 0;
        }
    }
}
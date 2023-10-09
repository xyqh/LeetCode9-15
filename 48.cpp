#include "LeetCodeBase.h"

void rotate(vector<vector<int>>& matrix){
    int n = matrix.size();
    for(int i = 0; i < n; ++i){
        for(int j = i; j < n - i - 1; ++j){
            // 旋转公式，顺时针旋转90°，之后向上平移n-1
            int newX = i, newY = j;
            int pixel = matrix[newX][newY];
            for(int cur = 0; cur < 4; ++cur){
                int prePixel = pixel;
                swap(newX, newY);
                newY = -newY;
                newY += n - 1;
                pixel = matrix[newX][newY];
                matrix[newX][newY] = prePixel;
            }
        }
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotate(matrix);
    for(auto nums:matrix){
        for(int num:nums){
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
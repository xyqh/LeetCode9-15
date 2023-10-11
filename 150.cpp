#include "LeetCodeBase.h"

int evalRPN(vector<string>& tokens) {
    stack<int> nums;
    int n = tokens.size();
    for(int i = 0; i < n; ++i){
        if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
            int num1 = nums.top();
            nums.pop();
            int num2 = nums.top();
            nums.pop();

            if(tokens[i] == "+"){
                nums.push(num2 + num1);
            }else if(tokens[i] == "-"){
                nums.push(num2 - num1);
            }else if(tokens[i] == "*"){
                nums.push(num2 * num1);
            }else if(tokens[i] == "/"){
                nums.push(num2 / num1);
            }
        }else{
            nums.push(atoi(tokens[i].c_str()));
        }
    }

    return nums.top();
}
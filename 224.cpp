#include "LeetCodeBase.h"

int calculate(string s) {
    stack<int> nums;
    stack<int> ops;
    int sign = 1, ans = 0;
    ops.push(sign);
    int i = 0, n = s.size();
    while(i < n){
        char cur = s[i];
        if(cur == '+'){
            sign = ops.top();
            ++i;
        }else if(cur == '-'){
            sign = -ops.top();
            ++i;
        }else if(cur == ' '){
            ++i;
        }else if(cur == '('){
            ops.push(sign);
            ++i;
        }else if(cur == ')'){
            ops.pop();
            ++i;
        }else{
            int curI = i;
            while(curI < n && s[curI] >= '0' && s[curI] <= '9'){
                ++curI;
            }

            int num = atoi(s.substr(i, curI - i).c_str());
            num *= sign;
            ans += num;
            i = curI;
        }
    }

    return ans;
}

int main(){
    string s = "(1+(4+5+2)-3)+(6+8)";
    // string s = "1-(     -2)";
    // string s = "1 + 1";
    // string s = " 2-1 + 2";
    int ans = calculate(s);
    cout << ans << endl;
    system("pause");
    return 0;
}
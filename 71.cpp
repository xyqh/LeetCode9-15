#include "LeetCodeBase.h"

string simplifyPath(string path){
    stack<string> stk;
    int i = 0, n = path.size();
    while(i < n){
        if(path[i] == '.'){
            int pointNum = 0, curI = i;
            while(i < n && path[i] != '/'){
                ++pointNum;
                ++i;
            }

            if(pointNum == 1){
                // empty
            }else if(pointNum == 2 && path[curI + 1] == '.'){
                if(!stk.empty()){
                    stk.pop();
                }
            }else{
                stk.push(path.substr(curI, pointNum));
            }
        }else if(path[i] == '/'){
            while(i < n && path[i] == '/'){
                ++i;
            }
        }else{
            int curI = i;
            while(i < n && path[i] != '/'){
                ++i;
            }
            stk.push(path.substr(curI, i - curI));
        }
    }

    string ans = "";
    if(stk.empty()){
        ans = "/";
    }else{
        while(!stk.empty()){
            string p = stk.top();
            stk.pop();
            ans = "/" + p + ans;
        }
    }

    return ans;
}
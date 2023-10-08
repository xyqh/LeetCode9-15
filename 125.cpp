#include "LeetCodeBase.h"

bool isLegalLetter(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

bool isPalindrome(string s){
    int left = 0, right = s.size() - 1;
    while(left < right){
        while(left < right && not isLegalLetter(s[left])){
            ++left;
        }
        while(left < right && not isLegalLetter(s[right])){
            --right;
        }
        if(left >= right) break;
        if(tolower(s[left]) != tolower(s[right])) return false;
        ++left;
        --right;
    }

    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}
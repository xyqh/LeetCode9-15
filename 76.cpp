#include "LeetCodeBase.h"

bool isContains(unordered_map<char, int>& mp1, unordered_map<char, int>& mp2){
    for(unordered_map<char, int>::iterator it = mp1.begin(); it != mp1.end(); ++it){
        if(mp2.find(it->first) == mp2.end() || mp2[it->first] < it->second){
            return false;
        }
    }

    return true;
}

string minWindow(string s, string t){
    unordered_map<char, int> hashT;
    for(int i = 0; i < t.size(); ++i){
        ++hashT[t[i]];
    }

    int slow = 0, fast = 0, n = s.size();
    int ansL = -1, len = INT_MAX;
    unordered_map<char, int> hashS;
    while(fast < n){
        if(hashT.find(s[fast]) != hashT.end()){
            ++hashS[s[fast]];
        }

        if(hashT.find(s[fast]) != hashT.end()){
            while(slow <= fast && isContains(hashT, hashS)){
                if(len > fast - slow + 1){
                    ansL = slow, len = fast - slow + 1;
                }
                if(hashT.find(s[fast]) != hashT.end()){
                    --hashS[s[slow]];
                }
                ++slow;
            }
        }
        ++fast;
    }

    return ansL == -1 ? "" : s.substr(ansL, len);
}

int main(){
    string s1 = "a";
    string s2 = "aa";
    cout << minWindow(s1, s2) << endl;
    return 0;
}
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>
#include<iostream>

using namespace std;

struct ListNode
{
    ListNode *next;
    int val;
    ListNode(int _val):
        val(_val),
        next(nullptr)
        {};
};

struct TreeNode
{
    TreeNode *left;
    TreeNode *right;
    int val;
    TreeNode(int _val):
        val(_val),
        left(nullptr),
        right(nullptr)
        {};
    
    TreeNode(int _val, TreeNode *_left, TreeNode *_right):
        val(_val),
        left(_left),
        right(_right)
        {};
};
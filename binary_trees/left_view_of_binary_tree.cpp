#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// can also be solved iteratively using level order traversal
void leftViewUtil(Node* root, int level, int* max_level_so_far, vector<int>& res)
{
    if(root == nullptr)
    {
        return;
    }
    
    if(level > *max_level_so_far)
    {
        res.push_back(root->data);
        *max_level_so_far = level;
    }
    
    leftViewUtil(root->left, level+1, max_level_so_far, res);
    leftViewUtil(root->right, level+1, max_level_so_far, res);
}

vector<int> leftView(Node *root)
{
   vector<int> res;
   int max_level_so_far = 0;
   
   leftViewUtil(root, 1, &max_level_so_far, res);
   
   return res;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        int level=0;
        while(q.size()>0){
            TreeNode* temp=q.front();
            q.pop();
            if(temp==NULL){
                if(level%2==0){
                    for(int i=0;i<v.size();++i){
                        if(v[i]%2==0) return false;
                        if(i!=v.size()-1 && v[i]>=v[i+1]) return false;
                    }
                }
                else{
                    for(int i=0;i<v.size();++i){
                        if(v[i]%2!=0) return false;
                        if(i!=v.size()-1 && v[i]<=v[i+1]) return false;
                    }
                }
                v.clear();
                level++;
                if(!q.empty()) q.push(NULL);
            }
            else{
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                v.push_back(temp->val);
            }
        }
        return true;
    }
};
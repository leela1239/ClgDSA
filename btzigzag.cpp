#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>dp;
        queue<int>q;
        q.push(root->val);
        while(!q.empty())
        {
            int size=q.size();
            while(size)
            {
                TreeNode *temp=q.front;
                if(temp->left!=NULL)
                {
                    q.push(temp->left->val);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right->val);
                }
                dp.push_back(temp->val);
                q.pop();
                size-=1;
            }
            ans.push_back(dp);

        }
        return ans;
        
    }
int main()
{

}
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *left;
		Node *right;
		Node(int val)
		{
			data=val;
			left=right=NULL;
		}
};
void Inorder(Node *root)
{
	if(root==NULL)return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
void Preorder(Node *root)
{
	if(root==NULL)return;
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}
void Postorder(Node *root)
{
	if(root==NULL)return;
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}
void Levelorder(Node *root,int l,vector<vector<int>>&v)
{
	if(root==NULL)return;
	if(v.size()==l)
	{
		v.push_back({root->data});
	}
	else
	{
		v[l].push_back(root->data);
	}
	Levelorder(root->left,l+1,v);
	Levelorder(root->right,l+1,v);

}
int main()
{
	Node *root=new Node(10);
	Node *first=new Node(20);
	root->left=first;
	Node *second=new Node(30);
	root->right=second;
	Node *third=new Node(40);
	first->left=third;
	Node *fourth=new Node(50);
	first->right=fourth;
	Inorder(root);
	cout<<"\n";
	Preorder(root);
	cout<<"\n";
	Postorder(root);
	cout<<"\n";
	vector<vector<int>>v;
	Levelorder(root,0,v);
	cout<<"LEVEL ORDER : "<<"\n";
	for(auto it:v)
	{
		for(auto x:it)
		{
			cout<<x<<" ";
		}
	}


}
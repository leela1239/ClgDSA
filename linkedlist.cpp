#include<bits/stdc++.h>
using namespace std;
class LinkedList
{
	public:
	struct Node
	{
		int data;
		Node *next;
		Node(int val)
		{
			data=val;
			next=NULL;
		}
	};
	Node *head;
	LinkedList()
	{
		head=NULL;
	}
	void Insert_at_end(int x)
	{
		//creating a new node
		Node *nn= new Node(x);
		//inserting a new node
		if(head==NULL)
		{
			head=nn;
			return;
		}
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;
	}
	void Insert_at_head(int x)
	{
		//creating a new node
		Node *nn= new Node(x);
		//inserting a new node
		if(head==NULL)
		{
			head=nn;
			return;
		}
		nn->next=head;
		head=nn;
	}
	void Insert_at_pos(int pos,int x)
	{
		Node *nn=new Node(x);
		int c=0;
		Node *temp=head;
		while(temp)
		{
			c+=1;
			temp=temp->next;
		}
		if(pos>c)
		{
			Insert_at_end(x);
		}
		else if(pos==1)
		{
			Insert_at_head(x);
		}
		else
		{
			Node *temp=head;
			for(int i=1;i<pos-1;i++)
			{
				temp=temp->next;
			}
			nn->next=temp->next;
			temp->next=nn;
		}
	}
	void display()
	{
		Node *temp=head;
		while(temp)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};
int main()
{
	LinkedList ll;
	ll.Insert_at_end(10);
	ll.Insert_at_head(20);
	ll.Insert_at_end(30);
	ll.Insert_at_head(40);
	ll.Insert_at_pos(1,50);
	ll.display();
}
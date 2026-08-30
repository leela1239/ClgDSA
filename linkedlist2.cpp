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
	Node *head,*tail;
	LinkedList()
	{
		head=NULL;
		tail=NULL;
	}
	void Insert(int x)
	{
		//creating a new node
		Node *nn= new Node(x);
		//inserting a new node
		if(head==NULL)
		{
			head=nn;
			tail=
			return;
		}
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;


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
	ll.Insert(10);
	ll.Insert(20);
	ll.Insert(30);
	ll.Insert(40);
	ll.display();
}
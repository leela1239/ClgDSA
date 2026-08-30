/*

TOPOLOGICAL SORT : 

		Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices

		such that for every directed edge u v, vertex u comes before v in the ordering.

--> NOTE: IF a graph has a cycle then it is not possible to topological sort for it.

 	  Hence we can write a toplogical sort for only directed acyclic graphs (DAG).

--> Algorithm: (Using BFS)

Step-1:  Compute in-degree (number of incoming edges) for each of the vertex present in the DAG 
		 
Step-2: Pick all the vertices with in-degree as 0 and add them into a queue.

Step-3: Remove a vertex from the queue (Dequeue operation) and then add it to result vector (res). 

	    Decrease in-degree by 1 for all its neighbouring nodes.

        If the in-degree of neighbouring nodes is reduced to zero, then add it to the queue. 

Step 4: Repeat Step 3 until the queue is empty.

Step 5: If the length of the  vector res is equal to the no.of nodes in the graph then topological sort is possible 

		and the answer is the vector res. 

		Else Topological sort is not present.

--> Time Complexity: O(V+E). 

--> Auxiliary space: O(V)  The extra space is needed for the stack.

--> Applications of Topological Sorting:

 ** Topological Sorting is mainly used for scheduling jobs from the given dependencies among jobs. 

 ** In computer science, applications of this type arise in:

 **  Instruction scheduling

 ** Ordering of formula cell evaluation when recomputing formula values in spreadsheets

 ** Logic synthesis

 ** Determining the order of compilation tasks to perform in make files

 **  Data serialization

 ** Resolving symbol dependencies in linkers

--> Refeence Link : https://www.geeksforgeeks.org/topological-sorting-indegree-based-solution/

					https://www.hackerearth.com/practice/algorithms/graphs/topological-sort/tutorial/
					
       Using DFS :  https://www.geeksforgeeks.org/topological-sorting/   


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,E;
	cin>>N>>E;
	vector<int>adj[N+1];
	int u,v;
	vector<int>indeg(N+1,0);
	for(int i=0;i<E;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		indeg[v]+=1;
	}
	queue<int>q;
	vector<int>res;
	for(int i=0;i<E;i++)
	{
		if(indeg[i]==0)q.push(i);
	}
	while(!q.empty())
	{
		int topo=q.front();
		q.pop();
		for(auto it:adj[topo])
		{
			indeg[it]--;
			if(indeg[it]==0)q.push(it);
		}
		res.push_back(topo);
	}
	for(auto it:res)
	{
		cout<<it<<" ";
	}
}
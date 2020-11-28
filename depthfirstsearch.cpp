#include<bits/stdc++.h>
using namespace std;
void recDFS(vector<int>adj[],int s,bool visited[])
{
     visited[s]=true;
     cout<<s<<" ";
     for(int i:adj[s])
     {
     	if(visited[i]==false)
     	{
     		recDFS(adj,i,visited);
     	}
     }
}
void DFS(vector<int>adj[],int v,int s)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
		recDFS(adj,s,visited);
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt", "w", stdout);
  #endif



	int v,e;
	cin>>v>>e;
	vector<int>adj[v];
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	DFS(adj,v,0);
}
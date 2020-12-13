#include<bits/stdc++.h>
using namespace std;
DFS(vector<int>adj[],stack<int>&st,int i,bool visited[])
{
	visited[i]=true;

	for(int x:adj[i])
	{
		if(visited[x]==false)
		{
			DFS(adj,st,i,visited);
		}
	}
	st.push(i);
}
TS_DFS(vector<int>adj[],int v)
{
	bool visited[v];
	
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}

	stack<int>st;
	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
		{
			DFS(adj,st,i,visited);
		}
	}
	while(st.empty()==false)
	{
		int x=st.top();
		st.pop();
		cout<<x<<" ";
	}
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
	for(int i=0;i<v;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}

	TS_DFS(adj,v);
}
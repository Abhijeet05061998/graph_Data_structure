#include<bits/stdc++.h>
using namespace std;


void BFS(vector<int>adj[],int v,int s)
{
    bool visited[v];
    for(int i=0;i<v;i++)
    {
    	visited[i]=false;
    }
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(q.size()!=0)
    {
    	int u=q.front();
    	q.pop();
    	cout<<u<<" ";
    	for(int i:adj[u])
    	{
    		if(visited[i]==false)
    		{
    			visited[i]=true;
    			q.push(i);
    		}
    	}
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
	vector<int>adj[v+1];

    for(int i=0;i<e;i++)
    {
    	int u,v;
    	cin>>u>>v;
	adj[u].push_back(v);
	adj[v].push_back(u);
    }

    BFS(adj,v,0);
}
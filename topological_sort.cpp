#include<bits/stdc++.h>
using namespace std;



void adj(vector<int>adj[],int v)
{
	vector<int>degree(v,0);
	for(int i=0;i<v;i++)
	{
		for(int x:adj[i])
		{
			degree[x]++;
		}
	}
	queue<int>q;
	for(int i=0;i<v;i++)
	{
		if(degree[i]==0)
		{
			q.push(i);
		}
	}
	while(q.size()!=0)
	{
		int u=q.front();
		q.pop();
		cout<<u<<" ";
		for(int x:adj[u])
		{
			if(--degree[x]==0)
			{
				q.push(x);
			}
		}
	}


}

int main()
{
	int v,e;
	cin>>v>>e;
	vector<int>adj[];

	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}

	ts(adj,v);
}



#include<bits/stdc++.h>
using namespace std;

void ts(vector<int>adj[],int v)
{
	vector<int>degree(v,0);
	for(int i=0;i<v;i++)
	{
		for(int x:adj[i])
			degree[x]++;
	}
	queue<int>q;
	for(int i=0;i<v;i++)
	{
		if(degree[i]==0)
		{
			q.push(i);
		}
	}

	while(q.size()!=0)
	{
		int u=q.front();
		q.pop();
		cout<<u<<" ";
		for(int i:adj[u])
			if(--degree[i]==0)
			{
				q.push(i);
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
	vector<int>adj[v];

	for(int i=0;i<v;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}

	ts(adj,v);
}
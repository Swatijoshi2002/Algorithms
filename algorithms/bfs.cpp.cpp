#include<iostream>
#include<queue>
using namespace std;
queue<int> data;
void print(int sv,int **edges,int n,bool *visited)
{
	data.pop();
	cout<<sv<<endl;
	visited[sv]=true;
	for(int i=0;i<n;i++)
	{
		if(i==sv)
		{
			continue;
		}
		if(edges[sv][i]==1)
		{
			if(visited[i])
			{
				continue;
			}
			data.push(i);
		}
	}
	while(data.size()!=0)
	{
		if(!visited[data.front()])
		print(data.front(),edges,n,visited);
		else data.pop();
	}
}
int main()
{
  int n,e;
  cin>>n>>e;
  int **edges=new int*[n];
  for(int i=0;i<n;i++)
  {
  	edges[i]=new int[n];
  	for(int j=0;j<n;j++)
  	{
  		edges[i][j]=0;
	}
  }
for(int i=0;i<e;i++)
  	{
  		int f,s;
  		cin>>f>>s;
  		edges[f][s]=1;
  		edges[s][f]=1;
	}
	bool *visited=new bool[n];
  for(int i=0;i<n;i++)
  {
  	visited[i]=false;
  }
	  int k;
	  cout<<"enter vertix as starting vertix"<<endl;
	  cin>>k;
	  data.push(k);
	  print(k,edges,n,visited);
}

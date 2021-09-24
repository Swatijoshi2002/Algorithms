#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
void printdfs(int sv,int **edges,bool *visited,int n)
{
	cout<<sv<<" ";
	s.pop();
	visited[sv]=true;
	for(int i=0;i<n;i++)
	{
		if(edges[sv][i]==1)
		{
			if(visited[i])
			{
				continue;
			}
			s.push(i);

		printdfs(s.top(),edges,visited,n);
		}
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
  bool visited[n];
  for(int i=0;i<n;i++)
  {
  	visited[i]=false;
  }
  	for(int i=0;i<e;i++)
  	{
  		int f,s;
  		cin>>f>>s;
  		edges[f][s]=1;
  		edges[s][f]=1;
	  }
	  int k;
	  cout<<"enter vertix as starting vertix"<<endl;
	  cin>>k;
	  s.push(k);
	  printdfs(k,edges,visited,n);
}

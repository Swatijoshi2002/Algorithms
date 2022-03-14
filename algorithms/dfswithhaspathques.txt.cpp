#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
void printdfs(int sv,int d,int **edges,bool *visited,int n)
{
	while(s.size()>0)
	{
	    int current=s.top();
	    s.pop();
	    cout<<current<<" ";
	    if(current==d)
	    break;
	    visited[current]=true;
	    for(int i=0;i<n;i++)
	    {
	        if(edges[current][i]==1 )
	        {
	            if(visited[i])
	            continue;
	            else s.push(i);
	        }
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
  	
	  }
	  int k,d;
	  cout<<"enter vertix as starting vertix and ending vertex"<<endl;
	  cin>>k>>d;
	  s.push(k);
	  printdfs(k,d,edges,visited,n);
}

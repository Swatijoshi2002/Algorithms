#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int k,int n)
{
	int smallest=k;
	int left=2*k+1;
	int right=2*k+2;
	if(left<n && a[left]<a[smallest])
	{
	smallest=left;
	}
	if(right<n && a[right]<a[smallest])
	{
		smallest=right;
	}
	if(smallest!=k)
	{
		swap(a[smallest],a[k]);
	
	heapify(a,smallest,n);
	}
}
int main()
{
	int n;
	cout<<"enter no of nodes of binary tree"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter binary tree data in form of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,i,n);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

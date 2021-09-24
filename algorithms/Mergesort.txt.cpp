#include<iostream>
using namespace std;
void merge(int a[],int s,int mid,int e)
{
	int ans[100];
	int i=s,j=mid+1,k=s;
	while(i<=mid && j<=e)
	{
		if(a[i]<=a[j])
		{
			ans[k++]=a[i++];
		}
		else ans[k++]=a[j++];
	}
		while(j<=e)
		{
			ans[k++]=a[j++];
		}
	while(i<=mid)
	{
		ans[k++]=a[i++];
	}

	for(i=s;i<=e;i++)
	{
		a[i]=ans[i];
	}
}
void merge_sort(int a[],int s,int e)
{
	if(s<e)
	{
   int mid=(s+e)/2;
   merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    merge(a,s,mid,e);
   	
}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	cout<<"SORTING BY MERGE SORT"<<endl;
	for(int i=0;i<n;i++)
	{
			printf("%d ",a[i]);
		}
}

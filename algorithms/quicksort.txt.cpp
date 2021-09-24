#include<iostream>
using namespace std;
int partition(int a[],int i,int j)
{
	int l=i,h=j;
	int pivot=a[l];
	while(i<j)
	{
		do{
			i++;
		}while(a[i]<=pivot);
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j)
		{
			swap(a[i],a[j]);
		}
		else swap(a[l],a[j]);
	}
	return j;	
	
}
void sort(int a[],int i,int j)
{
	if(i<j)
	{
		int k=partition(a,i,j);
		sort(a,i,k);
		sort(a,k+1,j);
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
	sort(a,0,n);
		cout<<"SORTING BY quick SORT"<<endl;
		for(int i=0;i<n;i++)
	{
			printf("%d ",a[i]);
		}
}

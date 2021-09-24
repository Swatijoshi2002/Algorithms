#include<iostream>
#include<algorithm>
void count_sort(int a[],int n,int k)
{
	int count[k+1];
	int b[n-1];
	for(int i=0;i<=k;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		++count[a[i]];
    }
    for(int i=1;i<=k;i++)
    {
    	count[i]=count[i]+count[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		b[count[a[i]]-1]=a[i];
		--count[a[i]];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=*max_element(a+1,a+n);
	count_sort(a,n,k);
	cout<<"SORTING BY COUNTING SORT"<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		}
}

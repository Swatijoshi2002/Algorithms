#include <iostream>
using namespace std;
void merge(int a[],int s,int e,int mid)
{
    int i,j,k;
    int n1=mid-s+1;
    int n2=e-mid;
    int left[n1],right[n2];
    for(i=0;i<n1;i++)
    {
        left[i]=a[s+i];
    }
    for(j=0;j<n2;j++)
    {
        right[j]=a[mid+1+j];
    }
     i=0,j=0,k=s;
    while(i<n1 && j<n2)
    {
       if(left[i]<=right[j])
       {
           a[k]=left[i];
           i++;
       }
       else{
           a[k]=right[j];
           j++;
       }
       k++;
    }
    while(i<n1)
    {
        a[k++]=left[i++];
    }
    while(j<n2)
    {
        a[k++]=right[j++];
    }
}
void merge_sort(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,end,mid);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}

#include <iostream>
using namespace std;
int partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    for(int j=i;j<=h-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quick_sort(int a[],int l,int h)
{
    if(l<h)
    {
        int j=partition(a,l,h);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,h);
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
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

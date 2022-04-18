#include <bits/stdc++.h>
using namespace std;
int min_index(int a[],int s,int e)
{
    int index=0;
    int min=INT_MAX;
    for(int i=s;i<=e;s++)
    {
        if(a[i]<min)
        {
            index=i;
            min=a[i];
        }
    }
    return index;
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
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

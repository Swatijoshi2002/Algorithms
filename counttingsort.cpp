#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int max=INT_MIN;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]>max)
       {
           max=a[i];
       }
   }
   int count[max+1];
    for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0;
  }
   for(int i=0;i<n;i++)
   {
       count[a[i]]++;
   }
   for(int i=1;i<=max;i++)
   {
       count[i]=count[i]+count[i-1];
   }
   int b[n];
   for(int i=n-1;i>=0;i--)
   {
       count[a[i]]=count[a[i]]-1;
       b[count[a[i]]]=a[i];
   }
   for(int i=0;i<n;i++)
   {
       cout<<b[i]<<" ";
   }
   
    return 0;
}

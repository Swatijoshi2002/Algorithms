class Solution {
  public:
	void shortest_distance(vector<vector<int>>&a){
	 int n=a.size();
	 for(int k=0;k<n;++k)
	 {
	     for(int i=0;i<n;++i)
	     {
	         for(int j=0;j<n;++j)
	         {
	             if(a[i][k]==-1 || a[k][j]==-1)
	             {
	                 continue;
	             }
	             if(a[i][j]==-1)
	             {
	                 a[i][j]=a[i][k]+a[k][j];
	             }
	             else{
	                 a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
	             }
	             
	         }
	     }
	 }

	}
};

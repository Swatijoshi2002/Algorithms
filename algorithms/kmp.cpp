#include<bits/stdc++.h>
#include<string>
using namespace std;
void lps_fun(int lps[],string s,int size)
{
	int i=1;
	int len=0;
	lps[0]=0;
	while(i<size)
	{
		if(s[i]==s[len])
		{
			lps[i]=len+1;
			len+=1;
			i+=1;
		}
		else{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else{
				lps[i]=0;
				i+=1;
			}
		}
	}
	for(int j=0;j<size;j++)
	{
		cout<<lps[j];
	}
	cout<<endl;
}
void kmp(int lps[],string s_main,string s_sub)
{
	int m=s_sub.size();
	int n=s_main.size();
	int i=0,j=0;
	while(i<n+m-1)
	{
		if(s_sub[j]==s_main[i])
		{
			i+=1;
			j+=1;
		}
		else{
			if(j!=0)
			{
				j=lps[j-1];
			}
			else i+=1;
		}
		if(j==m)
		{
			cout<<i-j<<" ";
			j=lps[j-1];
		}
		
	}
}

int main()
{
	string s_main,s_sub;
	cout<<"enter string"<<endl;
	cin>>s_main;
	cout<<"enter string to check"<<endl;
	cin>>s_sub;
	int sub_len=s_sub.size();
	int main_len=s_main.size();
    int lps[sub_len];
    lps_fun(lps,s_sub,sub_len);
    kmp(lps,s_main,s_sub);
}

#include <bits/stdc++.h>
using namespace std;
#define d 256 
void search(string pat,string txt, int q) 
{ 
    int M = pat.size(); 
    int N = txt.size(); 
    int i, j; 
    int p = 0; // hash value for pattern 
    int t = 0; // hash value for txt 
    int h = 1; 
  
    for (i = 0; i < M - 1; i++) 
        h = (h * d) % q; 
  
    for (i = 0; i < M; i++) 
    { 
        p = (d * p + pat[i]) % q; 
        t = (d * t + txt[i]) % q; 
    } 
    for (i = 0; i <= N - M; i++) 
    { 
        if ( p == t ) 
        {   
            bool flag = true;
           for (j = 0; j < M; j++) 
            { 
                if (txt[i+j] != pat[j])
                {
                  flag = false;
                  break;
                }
                  if(flag)
                  cout<<i<<" ";
                       
            } 
  
            
            if (j == M) 
                cout<<"Pattern found at index "<< i<<endl; 
        } 
  
        if ( i < N-M ) 
        { 
            t = (d*(t - txt[i]*h) + txt[i+M])%q; 
  
            if (t < 0) 
            t = (t + q); 
        } 
    } 
} 
int main() 
{ 
    string txt,pat;
	 cout<<"enter string and pattern to find"<<endl;
	 getline(cin,txt);
	 getline(cin,pat);
    int q = 101; 
      search(pat, txt, q); 
    return 0; 
} 
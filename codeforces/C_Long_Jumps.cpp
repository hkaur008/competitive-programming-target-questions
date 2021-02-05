#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);  
#define ll long long;
int main()
{light;
long long t;
 cin>>t;
 while(t--)
 {  long long array[100000],i,n,res=0;
  cin>>n;
  for(long long i=0;i<n;i++)
     cin>>array[i];
 
  for(long long j++)
  { long long count=0;
   for(long long k=j;k<n;k++)
  { 
     while(k<n)
     {
     count=array[k]+count;
     k=k+array[k];
     }
     break;
    }

    

 res=max(count,res);
  }
  cout<<res<<endl;
}
}

#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define  test int t;cin>>t;while(t--) 
#define for(k,n) for( long long i=k; i< n;i++)
#define ll long long 
int main()
{light;
 
 test{

     ll n ,k ,x=0,sum=0,z;
     cin>>n>>k>>z;
    for(0,n)
    {
        cin>>x;
        sum=sum+x;
    }   
    
    if((sum/k)>z)
    {
      cout<<z<<endl;
    }
    else{
        cout<<sum/k<<endl;
    }
 }
}
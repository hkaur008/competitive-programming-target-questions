#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define  test  long long t;cin>>t;while(t--) 
#define forl( i,k,n) for( long long i=k; i< n;i++)
#define ll long long 

int main()
{light;
 
 test{
   
   ll n , beauty , minb=0, maxb=0;
   cin>>n>>beauty;
    ll x;
    
   forl(i,0,n)
   {
      
       cin>>x;
       maxb= maxb+ceil((double) x/(double)beauty);
       
       minb=minb+x;
   }
   minb=ceil(minb/beauty);
   cout<<minb<<" "<<maxb<<endl;
 }
}
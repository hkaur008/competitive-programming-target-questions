#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define  test int t;cin>>t;while(t--) 
#define forl( k,n) for( long long i=k; i< n;i++)
#define ll long long  int
int hill(ll a,ll b ,ll c)
{
    if(max(a,max(b,c))==b)
       return 1;
    else
    {
        return 0;
    }
       
}
int valley (ll a,ll b ,ll c)
{
    if(min(a,min(b,c))==b)
       return 1;
    else
    {
        return 0;
    }
       
}
int main()
{light;
 
 test{
   
   ll n ;
   cin>>n;
   ll array[1000000];
   forl(0,n)
   {
       cin>>array[i];
       
   } 
  int three=0, one=0 , two=0;
  forl(2,n-1)
  {
      if((i>=2&&i<=(n-3)) &&
      (hill(array[i-1],array[i],array[i+1])&&valley(array[i-2],array[i-1],array[i])&&valley(array[i],array[i+1],array[i+2]))||
      (valley(array[i-1],array[i],array[i+1])&&hill(array[i-2],array[i-1],array[i])&&hill(array[i],array[i+1],array[i+2])))
      {
         ++three;
         break;
      }
      if(((i>=1)&&(i<=(n-3)))&& 
      {
        ++two;
      }

  }
 }
}
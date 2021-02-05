#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define  test long long t;cin>>t;while(t--) 
#define forl( k,n) for( long long i=k; i< n;i++)
#define ll long long  int

// Driver code
int main()
{
 test{
   ll arr[100005];
    ll n=0, target=0,sum=0,x=0;
    cin>>n>>target;
  
    forl(0,n){
        cin>>arr[i];
        sum=sum+arr[i];
        
    }
     if(sum<2*target)
     {
             cout<<"-1"<<endl;
     }
     
     else{
       sort(arr,arr+n,greater<ll>());
       
     ll i=0;
     ll a=0,b=0,sa=0,sb=0 , flag=0,flag2=0;
     while(i<n)
     {        sa=sa+arr[i];
           if(sa>=target)
              {++i;break;}
              for(ll j=i+1;j<n;j++)
              {
                      if(arr[j]>=target-sa)
                        {        flag=1;
                        a=j;}
                        
              }
              if(flag==1)
                        {
                              
                                swap(arr[a],arr[i+1]);
                        }
                 else{
                       for(ll m=i+1;m<n;m++)
                       {
                               if(arr[m]<target-sb)
                                {swap(arr[m],arr[i+1]);
                                        break;}
                       }
               }              

              ++i;
     }
     
     partial_sort(arr+i, arr +n, arr+n,greater<ll>()); 
     
     while(i<n)
     {        sb=sb+arr[i];
           if(sb>=target)
              {++i;break;}
              for(ll j=i+1;j<n;j++)
              {
                      if(arr[j]>=target-sb)
                        {        flag2=1;
                        b=j;}
                        
              }
              if(flag2==1)
                        {
                              
                                swap(arr[b],arr[i+1]);
                        }
               else{
                       for(ll m=i+1;m<n;m++)
                       {
                               if(arr[m]<target-sb)
                                {swap(arr[m],arr[i+1]);
                                        break;}
                       }
               }         

              ++i;
     }
     cout<<i<<endl;
    }
 }
}
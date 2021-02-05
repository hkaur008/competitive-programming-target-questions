// 1
// 5 2
// 1 2 3 4 5
// 1 2
// 2 4
// output 203
#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define  test int t;cin>>t;while(t--) 
#define ll long long  int
#define forl(i,k,n) for(ll i=k; i< n;i++)


void bruteforce(ll n ,ll op , ll  array [])
{ ll a, b;
    while(op--)
    { cin>>a>>b;
      for(ll i=a;i<=b;i++)
      {
       array[i]=array[i]+100;
      }

    }
    sort(array,array+n);
    cout<<array[n-1]<<endl;
}

void presum(ll n ,ll op , ll given[])
{
    ll a, b,arr[100005]={0};

    while(op--)
    { cin>>a>>b;
      arr[a+1]+=100;
      arr[b+2]-=100;

    }
    ll mx=LLONG_MIN,final;
    for(int i=1;i<=n;i++)
    {
        arr[i]+=arr[i-1];
        if(arr[i]>=mx)
        {final=i-1;}
        mx=max(mx,arr[i]);
        
    }
  
    cout<<mx+given[final]<<endl;
} 



// Driver code
int main()
{
    // #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
    

		test{
            //op = M
			ll n,op;
				cin>>n>>op;
                  ll array[n];
                  forl(i,0,n)
                  {
                     cin>>array[i];
                  }
            
                   
                   presum(n,op,array);

                  			}
			
		}
		
		
		



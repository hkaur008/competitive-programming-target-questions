// C++ program for the above approach
// inputs 
// 2
// 5 2
// 0 1 2 4 5
// 5 4
// -15 6 -11  -2 1
#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define  test int t;cin>>t;while(t--) 
#define forl(i,k,n) for( long long i=k; i< n;i++)
#define ll long long  

void bruteforce(ll n ,ll l , vector <ll>& stars)
{
    ll position=0,final=0;
    forl(i,0,n)
    { ll count=1;
        forl(j,i+1,n)
        {
            if(stars[j]-stars[i]<=l)
            {
                ++count;
            }
            else{
                break;
            }
        }
        if(count>=final)
        {
            final=count;
            position=stars[i];
        }
    }

   cout<<final<<" "<<position<<endl;
}

void binsearch(ll n ,ll l , vector <ll>&stars)
{
    ll position=0,final=0;
    forl(i,0,n)
    {
    ll count = upper_bound(stars.begin()+i,stars.end(),stars[i]+l)-(stars.begin()+i);
      if(count>=final)
        {
            final=count;
            position=stars[i];
        }
    }
     cout<<final<<" "<<position<<endl;
} 
void twopointer(ll n ,ll l , vector <ll> stars)
{
  ll position=0,final=0;
    forl(i,0,n)
    { ll count=1;
        ll j=0;
            while(j<n &&stars[j]<=stars[i]+l)
            {
                ++j;
            }
           
         count=j-i;

        if(count>=final)
        {
            final=count;
            position=stars[i];
        }
    }

   cout<<final<<" "<<position<<endl;
}


// Driver code
int main()
{
    // #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
    

		test{
			ll n,l ;
				cin>>n>>l;
                  vector <ll> stars(n);
                  for(auto &it : stars)
                  {
                     cin>>it;
                  }
                sort(stars.begin(),stars.end());
                   
                   binsearch(n,l,stars);

                  			}
			
		}
		
		
		



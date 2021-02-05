// C++ program for the above approach
 
#include <bits/stdc++.h> 
using namespace std; 
#define light ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define  test int t;cin>>t;while(t--) 
#define forl(i,k,n) for( long long i=k; i< n;i++)
#define ll long long  


// Driver code
int main()
{

    

		test{
			ll n,alice=0,bob=0,x;
				cin>>n;
                vector <ll> arr(n);
                
                for(auto &it: arr)
                {
                    cin>>it;
                   
                 }
                     
                
                      sort(arr.rbegin(),arr.rend());
                     
                     
                 
                     forl(i,0,n)
                     {
                          if(!(i&1))
                          {
                              if(!(arr[i]&1))
                             alice=alice+arr[i];
                          }
                          else{
                              if((arr[i]&1))
                              bob=bob+arr[i];
                          }
                     }
                 
             
                if(alice<bob)
                {
                    cout<<"Bob"<<endl;
                }
                else if(bob<alice)
                {
                    cout<<"Alice"<<endl;
                }
                else{
                    cout<<"Tie"<<endl;
                }
                  			}
                              
			
		}
		
		
	// Hara krishna 
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  	int t; 
  	cin>>t; 
  	while(t--){
  		long long n; 
  		cin>>n ;

  		int ans = 0; 
  		while(n>=2050){
  			ans++; 
  			long long x = 2050; 
  			while(x<=n){
  				x*= 10; 

  			}
  			x/=10 ;
  			n=n-x; 
  		}
  		if( n!= 0 ) cout<< -1<<endl; 
  		else cout<< ans << endl; 
  	}






  return 0;
}


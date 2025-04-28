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

  	int tc;
  	cin>>tc;
  	while(tc--){
  	
  	  	long long n, k ;
  	  	cin>>n>>k;
  	
  	  		vector< long long > a(n); 
  	  		for(int i= 0; i<n; i++)
  	  			cin>>a[i]; 

  	  		vector<long long> cop_a = a; 
  	  		sort(cop_a.begin(), cop_a.end());

  	  		if (cop_a == a || k>1 )
  	  		
  	  			cout<<"YES\n"; 

  	  		 else cout<<"NO\n";
  	}






  return 0;
}


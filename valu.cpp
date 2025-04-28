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
  		cin>>n; 
  		long long avg = 0; 
  		long long array [ n+3]; 
  		for(int i = 0; i<n; i++) 
  			cin>> array [i];
  		sort( array, array + n);
  		avg  = array[0]; 
  		
  		int cnt = 1; 
  		for( int i = 1; i<n; i++){
  			if( avg == array [i]) cnt++;
  			else break; 
  		}
  		cout<< n- cnt << endl; 
  	}








  return 0;
}


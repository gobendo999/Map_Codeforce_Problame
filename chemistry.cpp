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


  		int n,k; 
  		cin>>n>>k;
  		string s;
  		cin>>s; 

  		map< char, int > mp; 
  		for( int i = 0;i<n; i++){
  			mp[s[i]]++; 
  		}

  		int cnt = 0; 
  		for( auto it:mp){
  			if(it.second%2 !=0) cnt++; 
  		}
  			if(cnt - 1<0 ) cnt = 0; 
  			else cnt = cnt -1; 

  		if(k>= cnt && k<=n)
  			cout<<"YES\n";
  				else cout<<"NO\n";
  			
  	}







  return 0;
}


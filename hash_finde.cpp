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

  	int n; 
  	cin>>n;
  	vector<int > v; 
  	while(n--){

  		string s; 
  		cin>>s; 
  		for(int i = 0; i<s.size(); i++){
  			if( s[i] == '#') v.push_back(i+1);
  		}
  		
 		 }
 		reverse(v.begin(), v.end());
 		for(auto c:v) cout<<c<<" ";
 			cout<<endl;

  }





  return 0;
  	
}


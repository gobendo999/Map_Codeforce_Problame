#include <bits/stdc++.h>
using namespace std;

void replace(){

	string s; 
	cin>>s; 

	int n = s.size();
	s.replace( s.begin() + n-2, s.end(), "i");

	cout<<s<<endl;
}
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
  		replace();



    }
    	







  return 0;
}


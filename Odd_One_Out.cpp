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

  int tt; 
  cin>>tt;
  while(tt--){

  	int a,b,c; 
  	cin>>a>>b>>c; 
  	if( a==b) {
  		cout<<c<<endl;
   	}else if ( b == c) {
   		cout<<a<<endl;
   	} else cout<< b <<endl; 
  }






  return 0;
}


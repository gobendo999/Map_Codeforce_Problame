#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n;
	if(n%2==0)
		cout<<"Sakurako"<<endl;
	else cout<< "Kosuke"<<endl;

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
  		solve();
  	}




  return 0;
}


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
 	int a; 
 	int ans; 
 	cin>>a;

 	ans = a%10+ a/10;
 	cout<<ans;

 }





  return 0;
}


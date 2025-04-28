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
  string s; 
  cin>>s; 
  string rev = s; 
  reverse(rev.begin(), rev.end());
  if(s == rev){
    cout<<"Yes! It is palindrome!"<<endl; 
  }else{
    cout<<"Sorry! It is not palindrome!"<<endl;
  }


}




  return 0;
}


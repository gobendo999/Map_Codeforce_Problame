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


 
    string s; 
 
    int tc;
    cin>>tc; 
 
    for( int i = 0; i<tc; i++){
        cin>>s; 
        if(s.length()>10){
            cout<<s[0]<<s.length() - 2 << s[s .length() - 1] <<endl;
        } else 
        cout<<s<<endl; 
    }    
    


  return 0;
}


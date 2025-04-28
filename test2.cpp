#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    long long n; cin>>n;
    string s; cin>>s; 
    vector<long long> v;
    long long sm =1, b=n;
    for(long long i = n-2; i>=0;i--)
    {
        if( s[i] == '<')
            v.push_back(sm++);
        else v.push_back(b--); 

    }
        v.push_back(sm); 
        reverse(v.begin(),v.end());
        for( auto &i:v)
            cout<<i <<" ";
        cout<<endl;

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


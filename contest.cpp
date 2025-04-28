#include <bits/stdc++.h>
using namespace std;

void solve(){
 
    int n , m , l , r ;
    cin>>n>>m>>l>>r;
 
 
    int dis = n - m ;
 
 
    if ( abs(l) >= dis ){
 
        cout << l + dis << ' ' << r << endl;
    }else{
 
        cout << 0 << ' ' << r - l - dis << endl;
    }
}

int32_t main() {
#define ll long long 
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
/*
  int t; 
  cin>>t; 
  while(t--){
 	
 string line;

    while (getline(cin, line)) {
        
        if (line.empty()) continue;

        bool newWord = true;

        for (char ch : line) {
            if (newWord && ch != ' ') {
                cout << ch;
                newWord = false;
            } else if (ch == ' ') {
                newWord = true;
            }
        }

        cout << endl;
    }    
  }
*/

    int T;
    cin >> T;
    while (T--) {
        
        solve();

        }



  return 0;
}


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




	int  t;
    cin>>t;
    while(t--) {
        string pos;
        cin>>pos;
        string str = "abcdefgh";
        for(int  i = 1 ; i <= 8 ; i++) {
            if(pos[1]-'0'!=i)
                cout<<pos[0]<<i<<endl;
        }
        for(int  i = 0 ; i < 8 ; i++) {
            if(pos[0] != str[i]) {
                cout<<str[i]<<pos[1]<<endl;
            }
        }
    }



  return 0;
}


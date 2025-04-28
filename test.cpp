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
/*
  int t; 
  cin>>t; 
  while(t--){
  	int n ;
  	 cin>>n;
  	 int sum = 0;
  	 int arry[n+2];
  	 for(int i = 0; i<n ; i++){
  	 	cin>>arry[i];
  	 	sum += arry[i];
  	 }
  	 if(sum == n) cout<<0<<endl; 
  	 else if (sum <n) cout<< 1<<endl; 
  	 else{
  	 	 cout<< sum - n<< endl; 
  	 }
  }
*/
/*  int a, b; 
  cin>>a>>b; 

  a  = a + b; 
  b = a - b; 
  a = a - b; 

  cout<<a<<endl<<b;
*/

  long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        vector<int> cnt(10, 0);
        for (char c : s) {
            cnt[c - '0']++;
        }
        
        string result = "";
        for (int i = 0; i < 10; ++i) {
            int required = 9 - i;
            

            for (int d = required; d <= 9; ++d) {
                if (cnt[d] > 0) {
                    result += (d +'0');
                    cnt[d]--;
                    break;
                }
            }
        }
        
        cout << result << endl;
    }
	return 0 ;
}
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
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int onesInS = 0;

        
        for (char c : s) {
            if (c == '1') {
                onesInS++;
            }
        }

     
        int totalOnes = onesInS * (n - 1) + (n - onesInS);
        cout << totalOnes << endl;
    }









  return 0;
}


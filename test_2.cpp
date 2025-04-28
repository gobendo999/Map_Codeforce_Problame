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

   int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        
        int mn = *min_element(A.begin(), A.end());
        int mx = *max_element(A.begin(), A.end());
        
        int ans = max(0, mx - mn - 1);
        cout << ans << endl;
    }








  return 0;
}


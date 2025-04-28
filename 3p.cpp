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

   int t; // number of test cases
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int onesInS = 0;

        // Count the number of 1s in the original string s
        for (char c : s) {
            if (c == '1') {
                onesInS++;
            }
        }

        // Total 1s on the board:
        // Each row is a copy of s with one character flipped
        // So each 0 in s becomes 1 in exactly one row
        // Total 1s = (n - onesInS) + (onesInS * (n - 1))
        // Simplified to: onesInS * (n - 1) + (n - onesInS)
        int totalOnes = onesInS * (n - 1) + (n - onesInS);
        cout << totalOnes << endl;
    }







  return 0;
}


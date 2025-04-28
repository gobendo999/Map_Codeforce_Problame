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
        int n, x;
        cin >> n >> x;

        vector<int> p;

        for (int i = 0; i < x; ++i)
            p.push_back(i);

     
        for (int i = x + 1; i < n; ++i)
            p.push_back(i);

        
        if (x < n)
            p.push_back(x);

       
        for (int val : p)
            cout << val << " ";
        cout << '\n';
    }





  return 0;
}


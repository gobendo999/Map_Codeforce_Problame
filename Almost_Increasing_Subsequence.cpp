#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int32_t main() {
	
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


   int n,q; cin >> n >> q;
    vi a(n);
    for(int& i : a) cin >> i;
    vi p(n-1);
    for(int i=1;i<n-1;++i) {
        int downhill = a[i-1]>=a[i] and a[i]>=a[i+1];
        p[i] = p[i-1] + downhill;
    }
    while(q--) {
        int l,r; cin >> l >> r;
        --l,--r;
        if(l==r) {
            cout << "1\n";
        } else {
            int ans = (r-l+1) - p[r-1] + p[l];
            cout << ans << '\n';
        }
    }









  return 0;
}


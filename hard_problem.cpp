#include <bits/stdc++.h>
using namespace std;

string sum(const string &a, const string &b) {
    return a + b;
}
int32_t main() {
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  	 long long a[4]; 
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    long long totalSeats;
    
    long long firstSit = min(a[0], a[1]);
    long long secondSit = min(a[0], a[2]);
    
    totalSeats = stoll(sum(to_string(firstSit), to_string(secondSit)));
    
    totalSeats += min(a[3], stoll(sum(to_string(a[0] - firstSit), to_string(a[0] - secondSit))));
    
    cout << totalSeats << endl;





  return 0;
}


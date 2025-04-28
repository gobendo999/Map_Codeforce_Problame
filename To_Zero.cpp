#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);



  int t;
  cin>>t;

  while(t--){

  	int n , k;
  	cin>>n>>k;

  	int cnt = 0;

  	if ( n % 2 == 0 && k % 2 != 0 ){

  		k--;
  	}



  	else if ( n % 2 != 0 && k % 2 !=0 ){

  		n -= k;
  		k--;
  		cnt++;
  	}




  	cnt +=  (n+k  - 1)/ k ;

  	cout << cnt << endl;

  }
  







  return 0;
}

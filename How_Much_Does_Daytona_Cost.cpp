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
  	cin>>t;
  	while(t--){

  		int n, k;
  		cin>>n>>k;
  		bool  found = false ; 

  		vector<int > arr (n);
  		for(int i = 0; i<n; i++){
  			cin>>arr[i];
  			if( arr[i] ==k){
  				
  				found = true;
  		}

  	}
  		if (found)
  		{
  			cout<<"Yes\n";
  		}else cout<<"No\n";



	}



  return 0;
}


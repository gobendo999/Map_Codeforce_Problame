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

  	int m,n,l,r; 
  	cin>>m>>n>>l>>r;

  	int r1 = 0, l1 = 0;

  	for( int i = 0; i<r; i++){
  		if( m>= 1 && r1+1<= r){
  			r1++;
  			m--; 

  		}
  	} for( int i = l; i<=0; i++){
  		if(m>=1){
  			l1++;
  			m--;
  		}
  	}
  		cout<<l1<<" "<<r1<<endl;

				}
		




  return 0;
}


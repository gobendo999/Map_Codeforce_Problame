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
long long t;
cin>>t;
while(t--){

    long long n;
    cin>>n;
    set< long long > set;

    for( int i = 0; i<n; i++){
        long long x; 
        cin>>x; 
        set.insert(x); 
    } 
        cout<<set.size()<<endl;
    
    

}

    return 0;

}

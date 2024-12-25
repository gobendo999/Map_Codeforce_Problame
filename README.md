#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define rrep(i, a, b) for(int i = a; i >= b; --i)
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void intcode(){


	#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
	#endif 
}

const int MOD = 1e9 + 7;
const int INF = 1e9;

template<typename T>
void print_vector(const vector<T>& v) {
    for (const auto& el : v) {
        cout << el << ' ';
    }
    cout << '\n';
}

template<typename T>
void read_vector(vector<T>& v) {
    for (auto& el : v) {
        cin >> el;
    }
}

int main() {
    fast_io;
    intcode();
    
    int n; 
    cin >>n;
    map<string, int>cnt ; 
    while(n--){
        string s; 
        cin>>s;

        if(cnt[s] == 0 ) cout<<"Ok\n"; 
        else cout<<s<<cnt[s] <<endl; 

        cnt[s]++;

        /* input
        4
        gogo
        gogo
        ssoo
        ssoo
        */
// codeforce problame 


    }

    
return 0;
}

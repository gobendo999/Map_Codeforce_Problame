#include <bits/stdc++.h>
using namespace std;



int main() {
    #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  /*
    string word ,  a ="hello";  
    cin>>word; 

    int j = 0; 
    for( int i = 0; i<word.size(); i++){
    	if( a[j] == word[i]){

    		j++; 
    		if( j==5){
    			cout<<"YES";
    			return 0;
    		}
    	}
    }
    cout<<"NO"; 
    */
   /* // 2 variable swap 
    int a, b; 
    cin>>a>>b; 

    cout<<"Before swap = "<<a<<" "<<b<<endl;
  
    a = a+b; 
    b = a-b;
    a = a-b; 

    cout<<"After Swap = "<<a<<" "<<b<<endl;*/

        // 3 variable swap
/*    int a, b, temp;

    cin>>a>>b;

    cout<< " Befor Swap = "<< a <<" "<< b<<endl; 
    // 20
    temp = a;
// 10
    a = b;
    b = temp; 

cout<< " After Swap = " << a<< " "<< b << endl; 

*/
    // Fotball

    string a; 
    cin>>a; 
    int ans = 0; 

    for( int i = 0;  i<a.size(); i++)
    {
     int cnt = 0; 
     
    if (a [i] == '0'){
            while( a [i] == '0' && i<a.size()){
                cnt++; 
                i++; 
            }
            } else {
            while( a[i] == '1' && i<a.size()){

                cnt++; 
                i++; 
        }
      }
      if(cnt >= 7) ans = 1;
      i--;
    }
        if(ans == 1) cout<<"YES"; 
        else cout<<"NO";
    





return 0;
}
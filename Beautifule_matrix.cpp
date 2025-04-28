#include <bits/stdc++.h>
using namespace std;

#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

/*void intcode(){
    #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
    #endif 
}*/
int main() {
   
    optimize();   
    file();
 



        int x; 

        for( int i  = 1;  i<= 5; i++){
           
            for( int j = 1 ; j<= 5; j++)
            {
                cin>>x;
                if( x==1){

                    cout<<abs(i-3) + abs(j-3)<<endl;
                }
            }
        }
            
    
return 0;
}
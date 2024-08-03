//             * * * * * 
//          * * * * * 
//       * * * * * 
//    * * * * * 
// * * * * * 

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout<<"  ";
        }
        int a = 64;
        for(int k = 1; k <= i; k++){
           cout<<(char)(a + k)<<" ";
        }  
        cout<<endl;
    }

    return 0;
}
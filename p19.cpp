//     1                    
//    123
//   12345
//  1234567
// 123456789


//         A 
//       A B C 
//     A B C D E 
//   A B C D E F G 
// A B C D E F G H I 


#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout<<"  ";
        }
        int a = 64;
        for(int k = 1; k <= 2*i-1; k++){
           cout<<(char)(k+a)<<" ";
        }  
        cout<<endl;
    }

    return 0;
}


// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 5;

    for(int i = 1; i <= n; i++){
        int a =  64;
        for(int j = 1; j <= i; j++){
            if(i%2 == 0){
                 cout<<(char)(a+j)<<" ";
            }else{
                cout<<j<<" ";
            }       
        }
        cout<<endl;
    }

    return 0;
}
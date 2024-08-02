// 1
// 1 3
// 1 3 5
// 1 3 5 7

// 1 3 5 7 9 
// 1 3 5 7 9 
// 1 3 5 7 9 
// 1 3 5 7 9 
// 1 3 5 7 9 

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 4;

    for(int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1; j <= i; j++){
            cout<<a<<" ";
            a = a + 2;
        }
        cout<<endl;
    }

    return 0;
}
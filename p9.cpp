
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 4;

    for(int i = 1; i <= n; i++){
        int a =  64;
        for(int j = 1; j <= i; j++){
            cout<<(char)(a+j)<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}
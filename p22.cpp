// **********
// ****  ****
// ***    ***
// **      **
// *        *

 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n = 5;
    int nsp = 0;
    int nst = n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= nst; j++){
            cout<<"*";
        }
        for(int k = 1; k <= nsp; k++){
            cout<<" ";
        }
        for(int j = 1; j <= nst; j++){
            cout<<"*";
        }
        nsp+=2;
        nst--;
        cout<<endl;
    }
    return 0;
 }
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 5;
//     int a;
//     for (int i = 1; i <= n; i++) {
//         if(i%2 != 0) a = 1;
//         else a = 0;
//         for (int j = 1; j <= i; j++) {
//            cout<<a<<" ";
//            if(a == 1) a = 0;
//            else a = 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 5;
    int a;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
           if(i == j){
            cout<<"1 ";
           }else if((i+j)%2 == 0){
            cout<<"1 ";
           }else{
            cout<<"0 ";
           }
        }
        cout << endl;
    }

    return 0;
}
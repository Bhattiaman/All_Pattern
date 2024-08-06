//     1
//    121
//   12321
//  1234321
// 123454321

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int nsp = n - 1;

    for (int i = 1; i <= n; i++) {
        int a = i - 1;
        
        for (int q = 1; q <= nsp; q++) {
            cout << " ";
        }
        nsp--;
        
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        for (int k = 1; k <= i - 1; k++) {
            cout << a;
            a--;
        }
        cout << endl;
    }

    return 0;
}

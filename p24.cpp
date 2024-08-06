// A B C D E F G 
// A B C   E F G 
// A B       F G 
// A           G 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    int nsp = 1;
    int nst = n;
    int b = 64;
    
    // Print the first row
    for (int i = 1; i <= 2 * n + 1; i++) {
        cout << (char)(i+b) << " ";
    }
    cout << endl;

    // Print the remaining pattern
    for (int i = 1; i <= n; i++) {
        int a = 1;
        
        // Print decreasing numbers on the left side
        for (int j = 1; j <= nst; j++) {
            cout << (char)(a+b) << " ";
            a++; //a = 3
        }
        
        // Print spaces in the middle
        for (int k = 1; k <= nsp; k++) {
            cout << "  ";
            a++;
        }
        
        // Reset 'a' for right side numbers
        
        // Print decreasing numbers on the right side
        for (int j = 1; j <= nst; j++) {
            cout << (char)(a+b) << " ";
            a++;
        }
        
        nsp += 2;
        nst--;
        cout << endl;
    }
    
    return 0;
}

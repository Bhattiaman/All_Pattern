// 1 2 3 4 5 6 7 
// 1 2 3   5 6 7 
// 1 2       6 7 
// 1           7 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    int nsp = 1;
    int nst = n;
    
    // Print the first row
    for (int i = 1; i <= 2 * n + 1; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Print the remaining pattern
    for (int i = 1; i <= n; i++) {
        int a = 1;
        
        // Print decreasing numbers on the left side
        for (int j = 1; j <= nst; j++) {
            cout << a << " ";
            a++; //a = 3..    
        }
        
        // Print spaces in the middle
        for (int k = 1; k <= nsp; k++) {
            cout << "  ";
            a++;
        }
        
        // Reset 'a' for right side numbers
        
        // Print decreasing numbers on the right side
        for (int j = 1; j <= nst; j++) {
            cout << a << " ";
            a++;
        }
        
        nsp += 2;
        nst--;
        cout << endl;
    }
    
    return 0;
}

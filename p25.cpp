// 1 2 3 4 3 2 1 
// 1 2 3   3 2 1 
// 1 2       2 1 
// 1           1 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    // Print the first line
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    for (int j = n - 1; j >= 1; j--) {
        cout << j << " ";
    }
    cout << endl;

    // Print the remaining pattern
    for (int i = 1; i < n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }

        // Print spaces in the middle
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "  ";
        }

        // Print decreasing numbers
        for (int j = n - i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

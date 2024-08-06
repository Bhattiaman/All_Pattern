// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4; // This is the maximum number in the pattern
    int size = 2 * n - 1; // This will be the size of the pattern matrix

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int mn = min(min(i, j), min(size - i - 1, size - j - 1));
            cout << n - mn << " ";
        }
        cout << endl;
    }

    return 0;
}

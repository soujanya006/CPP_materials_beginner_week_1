#include <iostream>
using namespace std;

int main() {
    int n = 7;  // Since there are 7 rows in the pattern

    for(int i=1; i<=n; i++) {
        // Printing the left part of the pattern
        for(char j='A'; j<='A'+n-i; j++) {
            cout << j << " ";
        }

        // Printing the spaces in between
        for(int j=1; j<=(i-1)*2; j++) {
            cout << "  ";  // Two spaces for each position
        }

        // Printing the right part of the pattern (reverse order)
        for(char j='A'+n-i; j>='A'; j--) {
            // Skip the middle character for all rows except the last one
            if (i != n || j != 'A'+n-i) {
                cout << j << " ";
            }
        }

        // Move to the next line after finishing one row
        cout << endl;
    }

    return 0;
}

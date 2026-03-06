#include <iostream>

using namespace std;

class Solution {
public:
    void pattern8(int n) {
        for (int i = 0; i < n; i++) {
            // 1. Print the leading spaces
            for (int j = 0; j < i; j++) { 
                cout << " "; 
            }

            // 2. Print the stars
            // Formula: 2n - 2i (when starting at j=1)
            // If starting at j=0, it would be 2n - 2i - 1 to get the exact odd number of stars.
            // Your loop condition j < 2*n - (2*i) effectively prints 2n - 2i - 1 stars.
            for (int j = 1; j < 2 * n - (2 * i); j++) {
                cout << "*";
            }
            
            // 3. Move to the next line
            cout << endl;
        }
    }
}; 

// --- The Main Function ---
int main() {
    // Create an instance of the class
    Solution mySolution;

    // Define the size of the pattern
    int n = 5;

    cout << "Inverted Pyramid Pattern for n = " << n << ":\n" << endl;

    // Call your pattern8 function
    mySolution.pattern8(n);

    return 0;
}
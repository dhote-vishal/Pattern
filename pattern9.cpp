#include <iostream>

using namespace std;

class Solution {
private:
    // Top half of the diamond (upward pyramid)
    void pattern7(int n) {
        for(int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {  
                cout << " ";
            }
            for(int j = 1; j <= 2 * i - 1; j++) { 
                cout << "*"; 
            }
            cout << endl;
        }
    }

    // Bottom half of the diamond (inverted pyramid)
    void pattern6(int n) {
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {  
                cout << " ";
            }
            for(int j = 1; j < 2 * n - (2 * i); j++) { 
                cout << "*"; 
            }
            cout << endl;
        }
    } 

    // Alternative inverted pyramid (currently unused)
    void pattern8(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) { 
                cout << " ";
            }
            // for spacing we created formula 2n-2i {when start j=1}
            // if start j=0 then 2n-2i+1
            for (int j = 1; j < 2 * n - (2 * i); j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

public:
    // The main function to call both halves
    void pattern9(int n) {
         pattern7(n);
         pattern6(n);
    }
};

// --- Your Main Function ---
int main() {
    // 1. Create an instance of your class
    Solution mySolution;

    // 2. Set the size of the pattern
    int n = 5; 
    cout << "Printing Pattern for n = " << n << ":\n" << endl;

    // 3. Call the public method
    mySolution.pattern9(n);

    return 0;
}
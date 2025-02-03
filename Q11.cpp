#include <iostream>

using namespace std;


int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1); 
        n >>= 1;  
    }
    return count;
}

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;

    // Count 1 bits using bitwise method
    int manualCount = countSetBits(num);
    
    // Count 1 bits using built-in function (for GCC/Clang compilers)
    int builtinCount = __builtin_popcount(num);

    cout << "Number of 1 bits (manual method): " << manualCount << endl;
    cout << "Number of 1 bits (built-in method): " << builtinCount << endl;

    return 0;
}
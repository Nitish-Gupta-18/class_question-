#include <iostream>

using namespace std;

int main() {
    const int rowsA = 3, colsA = 2;
    const int rowsB = 2, colsB = 3;
    
    // First matrix (3x2)
    int A[rowsA][colsA] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Second matrix (2x3)
    int B[rowsB][colsB] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    // Result matrix (3x3)
    int C[rowsA][colsB] = {0}; // Initialize all elements to 0

    // Matrix multiplication logic
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) { // colsA == rowsB
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix
    cout << "Resultant Matrix (A × B):\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
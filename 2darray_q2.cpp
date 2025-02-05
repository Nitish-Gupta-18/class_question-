#include <iostream>

using namespace std;

int main() {
    const int rows = 2, cols = 2;
    int arr[rows][cols] = {
        {1, 2 },
        {5, 6},
        
    };


    for (int j= 0; j < rows; j++) {
        int sum = 0;
        for (int i = 0; i < cols; i++) {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    const int size = 3;
    int matrix[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int transpose[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
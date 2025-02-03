#include <iostream>

using namespace std;

int main()
{
    int n, key, i, found = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    

    cout << "Enter the number to search: ";
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            cout << "Element found at index " << i << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
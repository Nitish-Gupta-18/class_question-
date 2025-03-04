#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<char> v =  {'a', 'f', 'd'};

    v.push_back('z');
    // Inserting 'c' at index 1
    v.insert(v.begin() + 1, 'c');
    for (int i = 0; i < v.size(); i++) 
    cout << v[1] << " ";
return 0;
}
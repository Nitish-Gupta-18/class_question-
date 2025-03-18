#include <iostream>
#include <vector>
using namespace std;
int main() {

  vector<char> v = {'a', 'f', 'd'};
  v.push_back('z');
  v.insert(v.begin() + 1, 'c');
  for (char c : v)
    cout << c << " ";

  return 0;
}
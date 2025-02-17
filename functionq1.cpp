#include <iostream>
using namespace std;
int area(int x , int y=25)
{
    return x * y;
}
int main()
{
    int ans, l, b;
    cout << "enter length and breadth" << endl;
    cin >> l >> b;
    ans = area(l);
    cout << "area is" << ans;
    return 0;
}


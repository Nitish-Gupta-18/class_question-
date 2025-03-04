#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v;
// cout‹ <v.size(<<<endl<<v.capacity)<<endl;
v.push_back (5);
// cout<<v.size()<<endle<v.capacity()<<endl;
v. push_back(7);
// cout<<v. size) <<endl<<v.capacity () <<endl;
v. push_back (11);
// cout<<v.size() <<endl<<v.capacity() <<endl;
v.push_back (12);
// cout<<v.size() <<endl<<v.capacity()<<endl;
v. push_back(13);
// cout<<v.size() <<endl<<v.capacity() <<endl;
// Accessing Element
cout<< v[3] <<endl; 
cout<< v.at (2);

//Updating Element

v[3] = 10;
v.at (2) = 20;
cout <<v[3]<< endl;
cout<< v.at(2);

for (auto x:v)
cout<<x<<" ";
cout<<v.back();

}
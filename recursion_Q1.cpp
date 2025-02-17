//write a code to calculate power of a given no using recursion 

#include <iostream>
using namespace std;
int power(int b,int exp)
{
    if(exp==0){
        return 1;
    }
    if(exp==1){
        return b;
    }
    return b*power(b,exp-1);
}
int main()
{
    int b,exp;
    cout<<"enter value of base";
    cin>>b;
    cout<<"enter value of exponent";
    cin>>exp;
    cout<<power(b,exp);
    return 0;

}
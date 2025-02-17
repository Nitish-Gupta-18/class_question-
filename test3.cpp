#include <iostream>
#include <cstdarg>
using namespace std;
int sum (int count , ...)
{
    va_list args ;
    va_start (args,count);
    int total = 0;
    for (int i= 0; i <count;i++)
    {
        total += va_arg(args,int);

    }
    va_end (args);
    return;

}
int main ()

cout <<
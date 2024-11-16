#include <iostream>
using namespace std ;

int MinNum(int a, int b)
{
    if(a>b)
    {
        return b  ;
    }
    else
    {
        return a ;
    }
}

int main ()
{
    cout << MinNum(10,9);
    return 0 ;
}
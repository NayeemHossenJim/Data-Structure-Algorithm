#include <iostream>
using namespace std ;

int NFactorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i ;
    }
    return factorial ;
}

int main ()
{
    int n ;
    cin >> n ;
    cout <<"factorial Of N :"<< NFactorial(n); 
    return 0 ;
}
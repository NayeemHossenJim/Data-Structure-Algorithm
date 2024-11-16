#include <iostream>
using namespace std ;

int SumOfN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i ;
    }
    return sum ;
}

int main ()
{
    int n ;
    cin >> n ;
    cout <<"Sum Of 1 to N :"<< SumOfN(n); 
    return 0 ;
}
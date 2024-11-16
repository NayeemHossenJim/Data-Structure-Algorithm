#include <iostream>
using namespace std ;

double BiNomial(int n, int r)
{
    int nFactorial = 1 ;
    int rFactorial = 1 ;
    int n_rFactorial = 1 ;

    for (int i = 1; i <= n; i++)
    {
        nFactorial *= i ;
    }

    for (int j = 1; j <= r; j++)
    {
        rFactorial *= j ;
    }

    for (int k = 1; k <= (n-r); k++)
    {
        n_rFactorial *= k ;
    }

    return nFactorial / (rFactorial * n_rFactorial);
}

int main ()
{
    int n,r ;
    cin >> n >> r ;
    cout <<"BiNomial Cofficient:"<< BiNomial(n,r); 
    return 0 ;
}
#include <iostream>
using namespace std ;

int SumOfDigits(int n)
{
    int DigitSum = 0;
    while (n>0)
    {
        int lastdigit = n % 10 ;
        n = n / 10 ;
        DigitSum += lastdigit ;
    }
    return DigitSum ;
}

int main ()
{
    int n ;
    cin >> n ;
    cout <<"Sum Of Digits:"<< SumOfDigits(n); 
    return 0 ;
}
#include <iostream>
using namespace std ;

int BinToDec(int Bin)
{
    int ans = 0;
    int pow = 1;
    while(Bin > 0)
    {
        int rem = Bin % 10 ;
        ans += (rem * pow);
        Bin /= 10;
        pow *= 2;
    }
    return ans ;
}

int main ()
{
    int Bin ;
    cout << "Enter Your Binary Number: " ;
    cin >> Bin ;
    cout << Bin <<" In Decimal : "<<BinToDec(Bin) ;
    return 0 ;
}
#include <iostream>
using namespace std ;

int DecToBin(int dec)
{
    int ans = 0;
    int pow = 1;
    while(dec > 0)
    {
        int rem = dec % 2 ;
        dec /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans ;
}

int main ()
{
    int dec ;
    cout << "Enter Your Decimal Number: " ;
    cin >> dec ;
    cout << dec <<" In Binary : "<<DecToBin(dec) ;
    return 0 ;
}
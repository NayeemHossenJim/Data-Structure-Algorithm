#include "iostream"
using namespace std ;
int main ()
{
    int n ;
    cout << "Please Enter How many Line You Want: ";
    cin >> n ;
    int k = 1 ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i>=j)
            {
                cout << k ;
                k++ ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}
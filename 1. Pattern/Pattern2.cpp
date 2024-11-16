#include "iostream"
using namespace std ;
int main ()
{
    int n ;
    cout << "Please Enter How many Line You Want: ";
    cin >> n ;
    char k='A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << k  ;
            k++;
        }
        cout << endl ;
    }
    
}
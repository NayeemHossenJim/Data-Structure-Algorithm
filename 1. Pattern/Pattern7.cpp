#include "iostream"
using namespace std ;
int main ()
{
    int n ;
    cout << "Please Enter Your Input: " ;
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i>j)
            {
                cout << " " ;
            }
            else
            {
                cout << i ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}
#include "iostream"
using namespace std ;
int main ()
{
    int n ;
    cout << "Please Enter How many Line You Want: ";
    cin >> n ;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i>=j)
            {
                cout << ch ;
            }
        }
        ch++;
        cout << endl ;
    }
    return 0 ;
}